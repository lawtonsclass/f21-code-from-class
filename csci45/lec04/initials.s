.global _start 
_start: 
  // print prompt
  mov r7, #4 // write
  mov r0, #1 // stdout
  ldr r1, =prompt
  mov r2, #21
  swi 0

  // read the user's input
  mov r7, #3 // read
  mov r0, #0 // stdin
  ldr r1, =initials
  mov r2, #4
  swi 0
  
  // copy initials into initials_with_dots
  ldr r0, =initials
  ldr r1, =initials_with_dots
  ldrb r2, [r0] // r2 = initials[0]
  strb r2, [r1] // initials_with_dots[0] = r2
  add r0, r0, #1
  add r1, r1, #2
  ldrb r2, [r0] // r2 = initials[1]
  strb r2, [r1] // initials_with_dots[2] = r2
  add r0, r0, #1
  add r1, r1, #2
  ldrb r2, [r0] // r2 = initials[3]
  strb r2, [r1] // initials_with_dots[5] = r2

  // print initials with dots
  mov r7, #4 // write
  mov r0, #1 // stdout
  ldr r1, =initials_with_dots
  mov r2, #7
  swi 0

  // exit with a return code of 0
  mov r0, #0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!

.data
prompt: .ascii "Enter your initials: " // makes an array of characters
initials: .ascii "XXXX"
initials_with_dots: .ascii "X.X.X.\n"
