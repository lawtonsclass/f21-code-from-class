i = 1

while i <= 10:
  print(i)
  i = i + 1

  if i == 8:
    # stop a loop early with break
    break

#####################

sum = 0

while True:
  # get a number from the user
  num = int(input("Enter a number: "))
  # if we got -1, break
  if num == -1:
    break
  # take the number we got and it to the sum
  sum = sum + num

print("sum:", sum)

#####################

# get a list from the user
L = []

next_num = int(input("Enter a number: "))
L = L + [next_num]
while True:
  # get a number from the user
  next_num = int(input("Enter a number: "))
  # if we got -1, break
  if next_num == -1:
    break
  # take the number we got and it to the list L
  L = L + [next_num]

# now L is filled with stuff--let's find the min!
min = L[0]
# now go through the list and potentially update our guess
for x in L:
  if x < min:
    min = x # x is a better guess!

# now we have the correct minimum
print("min:", min)

#####################

def is_prime(n):
  # try every number between 2 and n-1
  for x in range(2, n):
    if n % x == 0:
      return False
  return True

did_we_prove_it = False

# try all nums between 32 and 37
for y in range(32, 38):
  if is_prime(y):
    print(y, "is prime!!!")
    did_we_prove_it = True

print(did_we_prove_it)
