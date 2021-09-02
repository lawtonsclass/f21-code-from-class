.global sum6
.type sum6, %function
.func sum6
sum6:
  // first 4 args in r0-r3
  // 5th arg on top of stack
  // 6th arg next on the stack
  add r0, r0, r1 
  add r0, r0, r2 
  add r0, r0, r3 

  // add in 5th arg
  ldr r1, [sp]
  add r0, r0, r1 

  // add in 6th arg
  ldr r1, [sp, #4] // [sp, #4] = [sp + 4]
  add r0, r0, r1 

  // return the sum in r0
  // (it's already there)

  // return to our caller
  mov pc, lr // set our next instruction's addr. to the return addr. stored in lr
