def sum(x, y):
  # give back the sum of x and y using return
  return x + y

def sum_bad(x, y):
  # *incorrectly* give back the sum of x and y using return
  print(x + y)


print(sum(2, 3))
print(sum(2, 3)*2)

print(sum_bad(2, 3))
