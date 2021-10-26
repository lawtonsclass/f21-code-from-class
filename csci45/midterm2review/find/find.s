.global find
.type find, %function
.func find
find: // int find(const char* s, char c);
  push {r4-r11, lr}

  // s is in r0, and c is in r1 

  mov r3, #0 // index in s where we found c

loop:
  ldrb r2, [r0] // r0 holds the addr. of the next char to read
  cmp r2, r1
  beq returnIndex
  // watch out for the end of the string
  cmp r2, #0 // '\0'
  beq returnNegative1

  // advance index & ptr into the string (r3 & s)
  add r3, r3, #1
  add r0, r0, #1
  bal loop

returnNegative1:
  mov r0, #-1
  bal done

returnIndex:
  mov r0, r3 // index was in r3--put it in r0

done:

  pop {r4-r11, pc}
