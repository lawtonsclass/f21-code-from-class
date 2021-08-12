// compile with as -march=armv8-a
// assemble with as arithmetic1.s -g -march=armv8-a -o arithmetic1.o

.global _start 
_start: 
  mov r0, #87
  mov r1, #25
  mov r5, #2
  mov r2, #7

  add r4, r0, r1 // r4 = r0 + r1
  mul r4, r4, r5 // r4 = r4 * r5
  SUB R2, R2, #3
  udiv r4, r4, r2 // r4 = r4 / r2

  mov r0, r4  // move r4's value into register R0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!
