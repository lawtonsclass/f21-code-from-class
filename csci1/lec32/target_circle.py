import turtle
import random

turtle.shape("turtle")
turtle.speed("fastest")

def drawSquare(center, width, color):
  center_x = center[0]
  center_y = center[1]

  turtle.pencolor(color)
  turtle.fillcolor(color)

  turtle.up()
  turtle.goto(center_x - width/2, center_y + width/2)

  turtle.begin_fill()
  
  turtle.setheading(0)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)
  turtle.right(90)
  turtle.forward(width)

  turtle.end_fill()

# drawSquare((0, 0), 200, "red")
# drawSquare((0, 0), 125, "white")
# drawSquare((0, 0), 50, "red")

# drawCircle((0, 0), 200, "red")
# drawCircle((0, 0), 125, "white")
# drawCircle((0, 0), 50, "red")

def drawCircle(center, width, color):
  center_x = center[0]
  center_y = center[1]

  radius = width / 2

  turtle.pencolor(color)
  turtle.fillcolor(color)

  turtle.up()
  turtle.goto(center_x, center_y - width/2)

  turtle.begin_fill()
  
  turtle.circle(radius)

  turtle.end_fill()

def drawTriangle(center, width, color):
  center_x = center[0]
  center_y = center[1]

  turtle.pencolor(color)
  turtle.fillcolor(color)

  turtle.up()
  turtle.goto(center_x - width/2, center_y - width/3)

  turtle.begin_fill()
  
  turtle.setheading(0)
  turtle.forward(width)
  turtle.left(180-60)
  turtle.forward(width)
  turtle.left(180-60)
  turtle.forward(width)

  turtle.end_fill()

def drawTargetLogo(drawShape, center):
  drawShape(center, 200, "red")
  drawShape(center, 125, "white")
  drawShape(center, 50, "red")

drawTargetLogo(drawCircle, (0, 0))

drawTargetLogo(drawSquare, (150, 150))

drawTargetLogo(drawTriangle, (-200, -200))
