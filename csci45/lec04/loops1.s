.global _start 
_start: 
  /////////
  mov r0, #10
loop:
  cmp r0, #1
  // it's nice to fall through for the true case, so let's invert our
  // condition
  blt done
  // if we're still here, r0 >= 1
  sub r0, r0, #1
  bal loop
done:

  ///////// stars stuff:

  /*
  int i = 1;
  while (i <= 4) {
    int j = 1;
    while (j <= 4) {
      cout << '*';
      j++;
    }
    cout << '\n';
    i++;
  }
  */

  mov r0, #1 // i
outerloop:
  cmp r0, #4
  bgt outerloopdone
  // body of outer loop here:
  mov r1, #1 // j
innerloop:
  cmp r1, #4
  bgt innerloopdone
  // output star char
    // save r0 & r1
    mov r5, r0
    mov r6, r1
    mov r7, #4 // write
    mov r0, #1 // stdout
    ldr r1, =starchar
    mov r2, #1
    swi 0
    mov r0, r5
    mov r1, r6
  add r1, r1, #1
  b innerloop
innerloopdone:
  // output newline
    mov r5, r0
    mov r6, r1
    mov r7, #4 // write
    mov r0, #1 // stdout
    ldr r1, =newline
    mov r2, #1
    swi 0
    mov r0, r5
    mov r1, r6
  add r0, r0, #1
  b outerloop
outerloopdone:

  /////////

  // exit with a return code of r1
  mov r0, #0
  mov r7, #1  // move the #1 into the register R7
  swi 0  // please execute the system call I just set up!

.data
starchar: .ascii "*"
newline: .ascii "\n"
