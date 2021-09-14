// int sumArray(int arr[], int size);
.global sumArray
.type sumArray, %function
.func sumArray
sumArray:
  // arr is in r0
  // size is in r1

  // sum the array
  // use r2 as accumulator
  mov r2, #0
  // loop while (r1 > 0)
loop:
  cmp r1, #0
  ble done

  // body of the loop
  // r2 += *r0;
  ldr r3, [r0] // r3 holds the val in the array at the current idx
  add r2, r2, r3

  // r0 += 4;
  add r0, r0, #4
  // r1--; 
  sub r1, r1, #1

  bal loop
done:
  
  // sum is in r2
  mov r0, r2

  // return to lr
  mov pc, lr
