i = 1
while i <= 10:
  print(i)
  i = i + 1

print()

i = 10
while i >= 1:
  print(i)
  i = i - 1

print()

sum = 0
j = 1
while j <= 10:
  # each time I'm in the body, I have a new val of j
  # to work with
  # step 1: add j into sum
  sum = sum + j
  # step 2: advance j to the next number from 1 to 10
  j = j + 1

# once we're done with the loop, sum holds the correct sum
print('sum:', sum)

print()

x = [1, 2, 3, 4, 5, 42]
# let's iterate through x!
i = 0 # start i at the first valid index of x
while i <= len(x) - 1:
  # use x[i] somehow in here...
  print(x[i])
  # advance i
  i = i + 1
