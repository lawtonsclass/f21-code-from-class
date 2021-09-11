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

  // our argument is in r0
  // our return value goes in r0
  add r0, r0, #1

  pop {r4-r11, pc}

.data
str: .asciz "%d\n"
