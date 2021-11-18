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

# make the turtle the paddle!
turtle.up()
turtle.shape("square")
turtle.fillcolor("green")
turtle.turtlesize(1.5, 6)
turtle.goto(-170, 0)

# function to move the paddle up
def moveUp():
  (x, y) = turtle.pos()
  new_y = y+10

  # check if we hit the top wall
  if new_y >= 200 - 60:
    # we hit the top wall
    # bring the turtle back inside
    new_y = 200 - 60

  # change y
  turtle.goto(x, new_y)
  

# function to move the paddle down
def moveDown():
  (x, y) = turtle.pos()
  new_y = y-10

  # check if we hit the bottom wall
  if new_y <= -200 + 60:
    # we hit the top wall
    # bring the turtle back inside
    new_y = -200 + 60

  # change y
  turtle.goto(x, new_y)

turtle.onkeypress(moveUp, "Up")
turtle.onkeypress(moveDown, "Down")
turtle.listen()
