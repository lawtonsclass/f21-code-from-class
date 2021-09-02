.global main
.type main, %function
.func main
main:
  push {r4-r11, lr} // save everything we need/are required to save

  // call sum6(1, 2, 3, 4, 5, 6)
  mov r0, #1
  mov r1, #2
  mov r2, #3
  mov r3, #4

  // the 5th & 6th parameters
  mov r4, #5
  mov r5, #6
  push {r5}
  push {r4}

  // call sum6
  bl sum6
  // answer is in r0
  // clean up the stack
  add sp, sp, #8 // remove the 2 args

  mov r1, r0
  ldr r0, =fmt
  bl printf

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // restore r4-r11, and set pc to the saved lr

.data
fmt: .asciz "%d\n"
