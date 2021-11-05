import turtle
import random

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
turtle.shape("circle")
turtle.turtlesize(2, 2)

# set the starting coordinates of the turtle
width = 40
turtle_x = random.randint(-100, 100)
turtle_y = 200 - width/2
turtle_offset = -2
turtle.goto(turtle_x, turtle_y)

def drawFrame():
  global turtle_y
  global turtle_offset
  
  # move the turtle_y by the offset
  turtle_y = turtle_y + turtle_offset

  # check to see if the turtle hit the edge of the bounding square
  # if so, move him back inside it, and also change his direction
  if turtle_y >= 200 - width/2:
    # we hit the top wall
    # bring the turtle back inside
    turtle_y = 200 - width/2
    # reverse the turtle's direction
    turtle_offset = turtle_offset * -1
  elif turtle_y <= -200 + width/2:
    # we hit the bottom wall
    # bring the turtle back inside
    turtle_y = -200 + width/2
    # reverse the turtle's direction
    turtle_offset = turtle_offset * -1
    
  # redraw the turtle
  turtle.goto(turtle_x, turtle_y)

while True: # forever, do the following
  drawFrame()
