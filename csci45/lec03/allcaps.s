.global _start 
_start: 
  // load the first byte from the csci string
  ldr r0, =csci // r0 holds the starting addr of the csci string

  // capitalize the char
  ldrb r1, [r0] // r1 = *r0 (get the first character)
  sub r1, r1, #32 // subtract 32 from r1
  strb r1, [r0] // store the updated char back in the string

  // get to the next char
  add r0, r0, #1

  // capitalize the next char
  ldrb r1, [r0] // r1 = *r0 (get the first character)
  sub r1, r1, #32 // subtract 32 from r1
  strb r1, [r0] // store the updated char back in the string

  // get to the next char
  add r0, r0, #1

  // capitalize the next char
  ldrb r1, [r0] // r1 = *r0 (get the first character)
  sub r1, r1, #32 // subtract 32 from r1
  strb r1, [r0] // store the updated char back in the string

  // get to the next char
  add r0, r0, #1

  // capitalize the next char
  ldrb r1, [r0] // r1 = *r0 (get the first character)
  sub r1, r1, #32 // subtract 32 from r1
  strb r1, [r0] // store the updated char back in the string

  // ----

  // call the write syscall
  mov r7, #4 // write
  mov r0, #1 // stdout
  ldr r1, =csci
  mov r2, #5
  swi 0

  // exit with a return code of 0
  mov r0, #0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!

.data
csci: .ascii "csci\n" // makes an array of characters
