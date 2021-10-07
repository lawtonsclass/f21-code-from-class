.global main
.type main, %function
.func main
main:
  push {r4-r11, lr}

  // open the file using the read syscall
  mov r7, #5 // the number of the open syscall
  ldr r0, =filename
  mov r1, #0 // 0 for read-only
  swi 0
  // r0 now holds a file descriptor for foo.txt
  mov r4, r0

  mov r5, #0 // we'll hold the count in r5

readloop:
  // read one char at a time into the nextchar string
  mov r7, #3
  mov r0, r4
  ldr r1, =nextchar
  mov r2, #1
  swi 0
  // if r0 > 0, then we read another character; otherwise we're
  // probably at the end of the file
  cmp r0, #0
  ble donereading
  // nextchar[0] is the character we just read

  // compare it to #'a', and keep track of the count
  ldr r0, =nextchar 
  ldrb r0, [r0] // r0 holds the first char (r0 = *nextchar;)
  cmp r0, #'a'
  beq add1
  bal doneadding1
add1:
  add r5, r5, #1
doneadding1:
  bal readloop

donereading:

  // close the file
  mov r7, #6
  mov r0, r4
  swi 0

  // display the count
  ldr r0, =fmt
  mov r1, r5
  bl printf

  // return 0
  mov r0, #0
  pop {r4-r11, pc} // this jumps to the return address of main

.data
fmt: .asciz "Number of 'a's: %d\n"
filename: .asciz "foo.txt"
nextchar: .ascii "_"
