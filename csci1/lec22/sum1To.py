def sum1To(n):
  sum = 0
  
  # calculate the real sum
  i = 1
  while i <= n:
    sum = sum + i
    i = i + 1
  
  return sum

sum_from_1_to_5 = sum1To(5)
print(sum_from_1_to_5)
print(sum1To(5)*3)
print(sum1To(10))

def sumOdd1To(n):
  sum = 0
  
  # calculate the real sum
  i = 1
  while i <= n:
    sum = sum + i
    i = i + 2
  
  return sum

print(sumOdd1To(5))
print(sumOdd1To(7))
