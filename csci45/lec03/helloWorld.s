.global _start 
_start: 

  // print "Hello, world!\n"
  mov r7, #4 // write
  mov r0, #1 // stdout
  ldr r1, =hello
  mov r2, #14
  swi 0

  bal exitlabel // "branch always"

.data
hello: .ascii "Hello, world!\n" // makes an array of characters
