n = 10

if n < 7:
  # this code in here only gets executed when n < 7
  print("it's less than 7!!!")
  print("still inside the if")

print("This always gets executed")

if n < 7:
  # this code in here only gets executed when n < 7
  print("it's less than 7!!!")
  print("still inside the if")
else:
  print("it's not less than 7!!!")


grade = 62.5

if grade >= 90:
  print("A")
else:
  # we need a *nested* if/else!
  if grade >= 70:
    print("C")
  else:
    print("F")

# the following is equivalent to the above!
if grade >= 90:
  print("A")
elif grade >= 70:
  print("C")
else:
  print("F")
