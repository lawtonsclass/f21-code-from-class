.global main
.type main, %function
.func main
main:
  push {r4-r11, lr} // save everything we need/are required to save

  
  // let's get a # from the user!
  // make room on the stack for 1 new local var (an int)
  add sp, sp, #-4
  ldr r0, =fmt_input
  mov r1, sp // sp by itself is the addr of our new local var
  bl scanf

  // pop from the stack into r0
  pop {r0}
  cmp r0, #42
  bge printString1
printString2:
  ldr r0, =string2
  bl printf
  bal done
printString1:
  ldr r0, =string1
  bl printf
done:

  mov r0, #0 // return 0
  pop {r4-r11, pc}

.data
fmt_input: .asciz "%d"
string1: .asciz ">= 42!\n"
string2: .asciz "< 42!\n"
