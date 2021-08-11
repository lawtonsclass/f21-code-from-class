.global _start // _start is a global label
_start: // this marks the start of the _start section
  @ this is also a comment!
  /* this too */
  mov r0, #42  // move the #0 into register R0
  mov r7, #1  // move the #1 into the resiter R7
  // 1 is the code for the "exit" system call
  swi 0  // please execute the system call I just set up!
