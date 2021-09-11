.global _start
_start:
  // write syscall
  mov r7, #4
  mov r0, #1
  ldr r1, =str
  mov r2, #14
  swi 0 // actually perform the syscall

  // exit with a 0 return 0
  mov r7, #1
  mov r0, #0
  swi 0 // actually perform the syscall

.data
str: .ascii "Hello, world!\n"
