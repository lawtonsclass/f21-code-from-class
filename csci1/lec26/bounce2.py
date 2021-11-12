import turtle
import random

turtle.shape("turtle")
turtle.speed("fastest")

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
turtle.fillcolor("pink")
turtle.shape("circle")
turtle.turtlesize(2, 2)

# set the starting coordinates of the turtle
width = 40
turtle_x = random.randint(-100, 100)
turtle_y = 200 - width/2

# to model physics accurately, we need a constant acceleration
turtle_acceleration = -0.5
# the ball should start out with no velocity, and it's the acceleration
# that should start moving it downwards
# every frame, the acceleration should affect the velocity
turtle_velocity = 0
turtle.goto(turtle_x, turtle_y)

def drawFrame():
  global turtle_y
  global turtle_velocity

  # let's use the acceleration to affect our velocity!
  turtle_velocity = turtle_velocity + turtle_acceleration
  # move the turtle_y (position) by the current velocity
  turtle_y = turtle_y + turtle_velocity

  # check to see if the turtle hit the edge of the bounding square
  # if so, move him back inside it, and also change his direction
  if turtle_y >= 200 - width/2:
    # we hit the top wall
    # bring the turtle back inside
    turtle_y = 200 - width/2
    # reverse the turtle's direction
    turtle_velocity = turtle_velocity * -1
  elif turtle_y <= -200 + width/2:
    # we hit the bottom wall
    # bring the turtle back inside
    turtle_y = -200 + width/2
    # reverse the turtle's direction
    # (we have two options here)
    # Because of the way we are handling collisions, the turtle will lose a little velocity
    # each time he hits the wall. If you'd like the turtle to bounce off just as high
    # next time, you can set his velocity to a constant here instead of negating it.
    turtle_velocity = turtle_velocity * -1
    # turtle_velocity = 19.5
    
  # redraw the turtle
  turtle.goto(turtle_x, turtle_y)

while True: # forever, do the following
  drawFrame()
