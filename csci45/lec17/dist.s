.global main
.type main, %function
.func main
main:
  push {r4-r10, lr}

  vmov.f32 s0, #3.5  // x1
  vmov.f32 s1, #2.5  // y1
  vmov.f32 s2, #1.5  // x2
  vmov.f32 s3, #-1.0 // y2

  // let's put the distance into s4
  vsub.f32 s0, s2, s0 // x2 - x1
  vsub.f32 s1, s3, s1 // y2 - y1
  vabs.f32 s0, s0 // |x2-x1|
  vabs.f32 s1, s1 // |y2-y1|
  vmul.f32 s0, s0, s0 // |x2-x1|^2
  vmul.f32 s1, s1, s1 // |y2-y1|^2
  vadd.f32 s0, s0, s1 // add the two squared differences
  vsqrt.f32 s4, s0 // take the sqrt

  vcvt.f64.f32 d0, s4
  // the format string is the first arg for printf, so it goes in r0
  // as usual
  ldr r0, =fmt
  // printf expects a second arg that is 8 bytes in r2-r3
  // takes d0 and splits into r2 and r3
  vmov r2, r3, d0
  // remember to align the stack to a multiple of 8 bytes!!!
  bl printf

  // using d0, print "yes" or "no" if the value stored is <= 1.0
  vmov.f64 d1, #1.0
  vcmp.f64 d0, d1 // compare dist with 1.0
  vmrs APSR_nzcv, FPSCR // bring over the flags from the FPU!!!
  ble it_was_le
it_was_gt:
  // print it was > 1.0
  ldr r0, =gt
  bl printf
  // jump to the end
  bal done_comparing
it_was_le:
  // print it was <= 1.0
  ldr r0, =le
  bl printf
done_comparing:

  // return 0
  mov r0, #0
  pop {r4-r10, pc} // this jumps to the return address of main

.data
fmt: .asciz "%f\n"
le: .asciz "yes! <= 1.0\n"
gt: .asciz "no! > 1.0\n"
