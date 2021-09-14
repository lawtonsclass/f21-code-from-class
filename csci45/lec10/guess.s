// void guessTheNumberGame(int up_to);
.global guessTheNumberGame
.type guessTheNumberGame, %function
.func guessTheNumberGame
guessTheNumberGame:
  push {r4-r11, lr}
  // up_to is in r0

  bl getRandomNumberFrom1To
  // r0 holds n
  mov r4, r0 // save n in a saved register
  mov r5, #-1

loop:
  cmp r5, r4
  beq loopdone

  // loop body
  ldr r0, =enterguess
  bl printf

  ldr r0, =scanfint
  ldr r1, =theguess
  bl scanf
  // mov theguess into r5
  ldr r5, =theguess
  ldr r5, [r5]

  // if
  cmp r5, r4
  bge elseif
  // print too low
  ldr r0, =toolow
  bl printf
  bal endif
elseif:
  // unnecessary to do another cmp r5, r4 
  ble else
  // print too high
  ldr r0, =toohigh
  bl printf
  bal endif
else:
  // print you got it
  ldr r0, =yougotit
  bl printf
endif:

  bal loop
loopdone:

  pop {r4-r11, pc}

.data
enterguess: .asciz "Enter your guess: "
scanfint: .asciz "%d"
toolow: .asciz "Too low\n"
toohigh: .asciz "Too high\n"
yougotit: .asciz "You got it!\n"
theguess: .word 0 // space for scanf to set
