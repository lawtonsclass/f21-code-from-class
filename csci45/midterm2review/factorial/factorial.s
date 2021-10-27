.global factorial
.type factorial, %function
.func factorial
factorial: // int factorial(int n);
  push {r4-r11, lr}

  // n is in r0
  
  cmp r0, #0
  beq baseCase
  bne recursiveCase

baseCase:
  mov r0, #1
  bal done

recursiveCase:
  mov r4, r0
  sub r0, r0, #1 // (now r0 holds n-1)
  bl factorial // (now r0 holds (n-1)!)
  mul r0, r0, r4

done:

  pop {r4-r11, pc}
