.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  // repeatedly call getchar until we see EOF
loop:
  bl getchar
  // r0 holds the next char
  // stop if it was EOF (-1)
  cmp r0, #-1
  beq done

  // lowercase whatever char we read (tolower)
  bl tolower
  // print out the lowercased char
  bl putchar

  // continue the loop
  bal loop

done:

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main

