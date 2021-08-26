.global main
.type main, %function
.func main
main:
  // save lr
  push {r4-r11, lr}

  ldr r0, =sysinfostruct // move the address of a struct sysinfo
  mov r7, #116 // sysinfo
  swi 0

  // extract uptime, totalram, & freeram into r1, r2, and r3
  ldr r0, =sysinfostruct 
  ldr r1, [r0] // uptime
  add r0, r0, #16
  ldr r2, [r0] // totalram
  add r0, r0, #4
  ldr r3, [r0] // freeram

  // put the addr of the C-string to print in r0 
  ldr r0, =printints
  // call printf
  bl printf

  // return 0
  mov r0, #0

  // return from main
  pop {r4-r11, pc} // takes the old lr value we saved, and put it into pc

.data
printints: .asciz "%u %u %u\n" // makes it a C-string for us!
sysinfostruct: .word 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 // make 64 bytes of space
