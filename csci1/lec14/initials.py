import turtle
import math

turtle.shape("turtle") # make the turtle a turtle
turtle.speed(8) # make him move fast

# move to the left in preparation for drawing the L
turtle.up()
turtle.backward(300)
turtle.left(90)
turtle.forward(200)

# draw the L
turtle.down()
turtle.left(180)
turtle.forward(200)
turtle.left(90)
turtle.forward(125)

# space between L and N
turtle.up()
turtle.forward(40)
turtle.down()

# draw the N
turtle.left(90)
turtle.forward(200)
angle = math.degrees(math.atan(125/200))
turtle.right(180 - angle)
l = math.sqrt(200**2 + 125**2)
turtle.forward(l)
turtle.left(180 - angle)
turtle.forward(200)

#### goto example

turtle.up()
turtle.goto(100, -100)
turtle.down()
turtle.goto(150, -100)
turtle.goto(150, -50)
turtle.goto(100, -50)
turtle.goto(100, -100)


