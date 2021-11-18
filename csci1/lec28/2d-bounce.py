import turtle
import random
import math

turtle.shape("turtle")

def drawRectangle(ul, w, h):
  # go to ul
  turtle.up()
  turtle.goto(ul[0], ul[1])
  turtle.down()

  # go right to draw the top of the rectangle
  turtle.seth(0) # face east (right)
  turtle.forward(w)
  turtle.right(90)
  # go down to draw the right side of the rect
  turtle.forward(h)
  turtle.right(90)
  turtle.forward(w)
  turtle.right(90)
  turtle.forward(h)

# draw our bounding square
drawRectangle((-200, 200), 400, 400)

# make the turtle the ball!
turtle.up()
turtle.shape("square")
turtle.fillcolor("green")
turtle.turtlesize(2, 2)

# set the starting coordinates of the turtle
width = 40
turtle_x = random.randint(-100, 100)
turtle_y = random.randint(-100, 100)
turtle.goto(turtle_x, turtle_y)

# start the turtle off in a random direction
turtle_xoffset = random.uniform(-1.0, 1.0)
turtle_yoffset = random.uniform(-1.0, 1.0)
# we want to ensure that the speed of the turtle is the same
# no matter the random direction that we picked! So, we'll
# "normalize the direction vector"
magnitude = math.sqrt(turtle_xoffset**2 + turtle_yoffset**2)
# now we just need to divide by the magnitude
turtle_xoffset = turtle_xoffset / magnitude
turtle_yoffset = turtle_yoffset / magnitude
# if you want the turtle to move faster, you can multiply the x/y
# offsets by a constant
turtle_xoffset = 2 * turtle_xoffset
turtle_yoffset = 2 * turtle_yoffset

def bounce_if_hit_wall():
  global turtle_x
  global turtle_y
  global turtle_xoffset
  global turtle_yoffset

  # check if we hit the top/bottom wall
  if turtle_y >= 200 - width/2:
    # we hit the top wall
    # bring the turtle back inside
    turtle_y = 200 - width/2
    # reverse the turtle's y direction
    turtle_yoffset = -turtle_yoffset
  elif turtle_y <= -200 + width/2:
    # we hit the bottom wall
    # bring the turtle back inside
    turtle_y = -200 + width/2
    # reverse the turtle's y direction
    turtle_yoffset = -turtle_yoffset

  # it's possible to hit both the top/bottom *and* left/right (corner)
  # so we have to consider each in separate if statements

  # check if we hit the left/right wall
  if turtle_x <= -200 + width/2:
    # we hit the left wall
    # bring the turtle back inside
    turtle_x = -200 + width/2
    # reverse the turtle's x direction
    turtle_xoffset = -turtle_xoffset
  elif turtle_x >= 200 - width/2:
    # we hit the right wall
    # bring the turtle back inside
    turtle_x = 200 - width/2
    # reverse the turtle's x direction
    turtle_xoffset = -turtle_xoffset

def drawFrame():
  # we use global here so that we can change the values of the global variables
  global turtle_x
  global turtle_y
  global turtle_xoffset
  global turtle_yoffset
  
  # move the turtle_x *and* turtle_y by the offsets
  turtle_x = turtle_x + turtle_xoffset
  turtle_y = turtle_y + turtle_yoffset

  # check to see if the turtle hit the edge of the bounding square
  # if so, move him back inside it, and also change his direction
  bounce_if_hit_wall()
    
  # redraw the turtle
  turtle.goto(turtle_x, turtle_y)

while True: # forever, do the following
  drawFrame()
