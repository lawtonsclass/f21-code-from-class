import turtle
import random

turtle.shape("turtle")
# turtle.speed("fastest")

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

drawSquare((0, 0), 200, "red")
drawSquare((0, 0), 125, "white")
drawSquare((0, 0), 50, "red")
