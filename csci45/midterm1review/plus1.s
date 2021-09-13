.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  // call plus1(42) so we can print that result
  mov r0, #42
  bl plus1
  // r0 now holds the result!
  // let's print the value in r0

  // printf("%d\n", r0);
  // the first 4 args go in r0-r3
  mov r1, r0 // the result
  ldr r0, =str
  bl printf // clobbers lr

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main
.endfunc

// int plus1(int x);
.global plus1
.type plus1, %function
.func plus1
plus1:
  push {r4-r11, lr}

  // let's make room on the stack to do our intermediate work
  // sp stores a pointer to the top of the stack, and the stack grows
  // "down"
  // to make room to hold 4 bytes, I need to subtract 4 from sp
  sub sp, sp, #4
  // so now [sp] will give me access to that new place in stack memory

  // our argument is in r0
  str r0, [sp]

  ldr r1, [sp]
  add r1, r1, #1
  // store the answer back
  str r1, [sp]

  // our return value goes in r0
  ldr r0, [sp]
  // remember to clean up any local vars from the stack!
  add sp, sp, #4

  pop {r4-r11, pc}

.data
str: .asciz "%d\n"
