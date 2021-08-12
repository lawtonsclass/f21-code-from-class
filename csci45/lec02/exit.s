.global exitlabel
exitlabel:
  mov r0, #0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!
