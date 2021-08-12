.global _start 
_start: 
  ldr r6, =eightyseven
  ldr r0, [r6]

  mov r1, #25
  mov r5, #2
  mov r2, #7

  add r4, r0, r1 // r4 = r0 + r1
  mul r4, r4, r5 // r4 = r4 * r5
  SUB R2, R2, #3
  udiv r4, r4, r2 // r4 = r4 / r2

  ldr r6, =result
  str r4, [r6]

  ldr r0, [r6]
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!

// eightyseven is a constant because it's with the data now!
// a label that holds a 32-bit int (the number 87)
eightyseven: .word 87

.data // this is the start of the .data section
// globals go here

result: .word 0
