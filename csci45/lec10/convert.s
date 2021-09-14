// void convert_to_all_caps(char* str);
.global convert_to_all_caps
.type convert_to_all_caps, %function
.func convert_to_all_caps
convert_to_all_caps:
  push {r4-r10, lr}

  // str is in r0
  mov r4, r0

  // while (*r4 != '\0')
loop:
  ldrb r0, [r4] // the char is in r0
  mov r1, #'\0'
  cmp r0, r1
  beq done

  // toupper *r4
  bl toupper // char is already in r0
  // save the capitalized char back into the string
  strb r0, [r4]
  // advance r4 to point to the next char
  add r4, r4, #1

  bal loop
done:

  pop {r4-r10, pc}
