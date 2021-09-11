.global _start
_start:
  // let's put into r0 the return code that we want to exit with
  // (so we'll sum 1 to 10 into r0)

  mov r0, #0
  mov r1, #1 // for (r1 = 1; r1 < 11; r1++)
loop:
  cmp r1, #11
  bge done // branch based on the comparison--branch if greater than or equal to
  // r0 = r0 + r1;
  add r0, r0, r1
  // r1++;
  add r1, r1, #1
  // continue the loop again
  bal loop

done:

  mov r7, #1
  swi 0 // actually perform the syscall
