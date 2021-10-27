def isPrime(n):
  j = 2
  while j <= n-1:
    # try dividing by j
    if n % j == 0:
      return False
    # advance j
    j = j + 1
  # if we got through every possible #, it's prime!
  return True  

i = 51
while True: # loop forever
  # try i to see if it's prime
  if isPrime(i):
    print(i, 'is > 50 and prime!!!')
    # quit() # this function call stops the program

  # if we didn't stop, keep advancing i
  i = i + 1
