.global swapColorsNEON
.func swapColorsNEON
.type swapColorsNEON, %function
swapColorsNEON:
  push {r4-r11, lr}
  
  // FIXME: implement the void swapColorsNEON(char* pixelsStart, int numPixels) 
  // function to swap the colors of numPixels pixels
  // starting at pixelsStart. numPixels is guaranteed to be a
  // multiple of 8 so that you can use 64-bit NEON registers.

  // loop through every pixel, reading a chunk at a time because NEON
loop:
  cmp r1, #0 // (we'll keep subtracting from numPixels every time we process more)
  ble loopend

  // read a chunk of pixels
  vld3.8 {d0, d1, d2}, [r0]

  // process them (swap red and green)
  vmov.8 d3, d0
  vmov.8 d0, d1
  vmov.8 d1, d3

  // write them back to memory
  vst3.8 {d0, d1, d2}, [r0] // (put an ! at the end to automatically advance r0)

  // advance r0
    // d0, d1, & d2 are all 64 bits (8 bytes)
    // so we're reading 24 bytes total
    // the next address we want to read is 24 bytes from now
  add r0, r0, #24

  sub r1, r1, #8 // we just processed 8 pixels

  bal loop

loopend: // (we've processed every pixel now--we're done!)
  pop {r4-r11, pc}

