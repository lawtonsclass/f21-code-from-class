.global _start
_start:
  // get 3 chars from the user with the read syscall
  // (really 4 chars total because we have to eat the \n char)
  // read syscall
  mov r7, #3
  mov r0, #0
  ldr r1, =str
  mov r2, #4
  swi 0 // actually perform the syscall

  // write what we just read
  mov r7, #4
  mov r0, #1
  ldr r1, =str
  mov r2, #4
  swi 0 // actually perform the syscall

  mov r7, #1
  mov r0, #0
  swi 0 // actually perform the syscall

.data
str: .ascii "XXXX"
