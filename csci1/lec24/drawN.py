import turtle

turtle.shape("turtle")

def drawN(ul, w, h):
  x = ul[0]
  y = ul[1]
  
  # go to bottom left
  turtle.up()
  turtle.goto(x, y-h)
  turtle.down()
  # go to upper left
  turtle.goto(x, y)
  # go to bottom right
  turtle.goto(x+w, y-h)
  # go to top right
  turtle.goto(x+w, y)

drawN((-100, 100), 200, 200)

drawN((-200, 200), 75, 35)
