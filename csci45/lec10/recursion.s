.global fact
.type fact, %function
.func fact
fact:
  push {r4-r11, lr}

  // return 1 if r0 == 0
  cmp r0, #0
  bne recursivecase_fact
  // base case--return 1
  mov r0, #1
  bal endfact

recursivecase_fact:
  mov r4, r0 // r4 = n 
  // make recursive call with n-1
  sub r0, r0, #1
  bl fact // rec. call
  // r0 now holds fact(n-1)
  // multiply by the original n
  mul r0, r0, r4

endfact:  

  pop {r4-r11, pc}


.endfunc

.global fib
.type fib, %function
.func fib
fib:
  push {r4-r11, lr}

  // see if we're in the first base case
  cmp r0, #0
  beq return0
  bal checksecondbasecase
return0:
  // if so, return 0
  mov r0, #0
  bal endfib

  // see if we're in the second base case
checksecondbasecase:
  cmp r0, #1
  beq return1
  bal recursivecase_fib
return1:
  // if so, return 1
  mov r0, #1
  bal endfib

  // otherwise, return fib(n-1) + fib(n-2)
recursivecase_fib:
  // r4 = n-1
  sub r4, r0, #1
  // r5 = n-2
  sub r5, r0, #2

  // call fib(n-1)
  mov r0, r4
  bl fib
  // save answer in r6
  mov r6, r0

  // call fib(n-2)
  mov r0, r5
  bl fib
  // add them together into r0
  add r0, r0, r6

endfib:

  pop {r4-r11, pc}

