import random

darts_inside_the_circle = 0

num_darts_to_throw = 10000000
for i in range(num_darts_to_throw):
  # randomly throw a dart
  x = random.uniform(-1, 1)
  y = random.uniform(-1, 1)
  # see if it landed inside the unit circle
  if x*x + y*y <= 1.0:
    darts_inside_the_circle = darts_inside_the_circle + 1

pi_approximation = darts_inside_the_circle / num_darts_to_throw * 4
print(pi_approximation)
