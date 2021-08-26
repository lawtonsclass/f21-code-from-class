.global main
.type main, %function
.func main
main:
  // argc is in r0
  // argv is in r1

  // all we have to do is place argc in r0 and return from main
  // argc is already in r0
  mov r0, r0

  // when _start called main, it placed the address to return to in lr
  // to return, we just need to jump there
  mov pc, lr // jump and start executing the code at the addr in lr
