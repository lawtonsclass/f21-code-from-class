.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  // open the file
  ldr r0, =filename
  ldr r1, =mode
  bl fopen
  mov r4, r0 // save away the fp

  mov r5, #0 // count = 0

  // loop until we hit EOF (-1 from fgetc)
loop:
  mov r0, r4
  bl fgetc
  // r0 is the next char from the file
  // if r0 == -1 (EOF), stop
  cmp r0, #-1
  beq done
  cmp r0, #'a'
  beq add1
  bne doneAdding1
add1:
  add r5, r5, #1
doneAdding1:
  // continue the loop
  bal loop
done:
  // print the count
  ldr r0, =fmt
  mov r1, r5
  bl printf

  // close the file
  mov r0, r4
  bl fclose

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main

.data
fmt: .asciz "Number of 'a's: %d\n"
filename: .asciz "foo.txt"
mode: .asciz "r"
