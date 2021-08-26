.global main
.type main, %function
.func main
main:
  // save lr
  push {lr}

  // put the addr of the C-string to print in r0 
  ldr r0, =hellostring
  // call printf
  bl printf

  // return 0
  mov r0, #0

  // return from main
  pop {pc} // takes the old lr value we saved, and put it into pc

.data
hellostring: .asciz "Hello, world!\n" // makes it a C-string for us!
