import turtle

turtle.speed('slowest')
turtle.shape('turtle')

# the turtle starts out at (0, 0) facing east

turtle.pencolor('pink')

turtle.forward(100)
turtle.left(90)
turtle.forward(100)
turtle.left(90)
turtle.forward(100)
turtle.left(90)
turtle.forward(100)

turtle.pencolor('blue')

turtle.up() # pick your tail up, please
turtle.forward(200)
turtle.down()
turtle.left(90)
turtle.forward(100)
turtle.left(180-60)
turtle.forward(100)
turtle.left(180-60)
turtle.forward(100)

turtle.done() # please wait after you've drawn stuff
