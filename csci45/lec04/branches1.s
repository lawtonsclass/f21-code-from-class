.global _start 
_start: 
  mov r0, #42
  mov r1, #5

  /////////

  cmp r0, #42
  beq truebranch
  // keeps going down here
  // the else case can go here!
  // else:
  sub r1, r1, #1
  bal end // don't also do true branch!
truebranch:
  add r1, r1, #1
end:

  /////////

  // exit with a return code of r1
  mov r0, r1
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!
