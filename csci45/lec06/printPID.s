.global main
.type main, %function
.func main
main:
  // save lr
  push {r4-r11, lr}

  // get the current pid using syscall #20
  mov r7, #20
  swi 0
  // now the pid is in r0

  // put the addr of the C-string to print in r0 
  mov r1, r0
  ldr r0, =printint
  // call printf
  bl printf

  // return 0
  mov r0, #0

  // return from main
  pop {r4-r11, pc} // takes the old lr value we saved, and put it into pc

.data
printint: .asciz "%u\n" // makes it a C-string for us!
