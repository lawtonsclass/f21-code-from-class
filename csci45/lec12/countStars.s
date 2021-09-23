.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  mov r4, #0 // start count at 0

  // repeatedly call getchar until we see EOF
loop:
  bl getchar
  // r0 holds the next char
  // stop if it was EOF (-1)
  cmp r0, #-1
  beq done

  // see if r0 was a star, and add to our count if so
  cmp r0, #'*'
  bne itwasntastar

  // if it was a star, add to r4
  add r4, r4, #1

itwasntastar:

  // continue the loop
  bal loop

done:

  // print out the count
  ldr r0, =fmt
  mov r1, r4
  bl printf

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main

.data
fmt: .asciz "Number of *s: %d\n"
