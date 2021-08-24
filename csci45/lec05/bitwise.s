.global _start 
_start: 
  mov r0, #21
  mov r1, #4

  // extract bit 2
  and r2, r0, r1
  // check if r2 = 0, ...

  mov r1, #32
  orr r0, r0, r1

  // negate using two's complement
  neg r0, r0 // r0 = ~r0
  add r0, r0, #1

  // exit with a return code of 0
  mov r0, #0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!

.data
