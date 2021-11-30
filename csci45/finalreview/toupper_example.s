.global toupper_asm
.type toupper_asm, %function
.func toupper_asm
toupper_asm: // char toupper_asm(char c);
  push {r4-r11, lr}

  cmp r0, #97
  blt donttouchthischar
  cmp r0, #122
  bgt donttouchthischar
  // if we're still here, we're within the valid range!
  sub r0, r0, #32

donttouchthischar:
  pop {r4-r11, pc}
.endfunc

.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  ldr r4, =str

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  ldrb r0, [r4] // next char in str
  // capitalize it
  bl toupper_asm
  strb r0, [r4] // store it right back in str
  add r4, r4, #1 // advance r4

  // print str using printf
  ldr r0, =str
  bl printf

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main

.data
str: .asciz "Ab42!\n"
