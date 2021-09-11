.global main
.type main, %function
.func main
main:
  push {lr}

  // printf(str);
  // the first 4 args go in r0-r3
  ldr r0, =str
  bl printf // clobbers lr

  // return 0
  mov r0, #0
  pop {pc} // this jumps to the return address of main

.data
str: .asciz "Hello, world!\n"
