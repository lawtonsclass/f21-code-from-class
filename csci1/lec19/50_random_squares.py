import turtle
import random

turtle.shape("turtle")
turtle.speed('fastest')

colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']

# loop 50 times exactly
i = 1
while i <= 50:
  # let's pick a random color to draw this next square!
  # we'll pick a random index into the colors list!
  rand_color_index = random.randint(0, len(colors)-1)
  rand_color = colors[rand_color_index]
  # set the fill color to rand_color
  turtle.fillcolor(rand_color)
  
  # go to a random location for the next square
  starting_x = random.randint(-300, 300)
  starting_y = random.randint(-300, 300)
  turtle.up()
  turtle.goto(starting_x, starting_y)
  # face turtle east always before we draw a square
  turtle.setheading(0)
  turtle.down()

  # pick the size of the square we want to draw
  square_side_length = random.randint(50, 200)

  turtle.begin_fill() # I'm about to start a new shape
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.left(90)
  turtle.forward(square_side_length)
  turtle.end_fill() # I'm done with the shape--fill it in now!

  # advance i
  i = i + 1
