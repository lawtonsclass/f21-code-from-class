import turtle
import random

turtle.shape("turtle")
turtle.speed("fastest")

(current_x, current_y) = turtle.pos()

while (-300 <= current_x <= 300) and (-300 <= current_y <= 300):
  # pick a random direction to move
  turning_options = [0, 90, 270]
  angle_to_move = random.choice(turning_options)
  turtle.left(angle_to_move)
  
  # pick a random distance to move
  dist = random.randint(5, 50)
  turtle.forward(dist)

  (current_x, current_y) = turtle.pos()
