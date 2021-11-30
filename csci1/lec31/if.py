users_height = input("Enter your height in inches: ")
users_height = int(users_height)

if users_height >= 42:
  print("You can ride!")
else:
  print("You can't ride :(")

#################

users_grade = float(input("Enter your grade as a percentage: "))

if users_grade >= 90.0:
  print("A")
elif users_grade >= 80.0:
  print("B")
elif users_grade >= 70.0:
  print("C")
elif users_grade >= 60.0:
  print("D")
else:
  print("F")
