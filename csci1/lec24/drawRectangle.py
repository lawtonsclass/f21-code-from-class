import turtle

turtle.shape("turtle")

def drawRectangle(ul, w, h, color):
  turtle.fillcolor(color)

  turtle.begin_fill()
  
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

  turtle.end_fill()

drawRectangle((-100, 100), 200, 200, "green")

drawRectangle((-50, 50), 75, 35, "purple")
