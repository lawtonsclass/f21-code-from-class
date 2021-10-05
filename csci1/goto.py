import turtle

turtle.shape('turtle')

print(turtle.pos())

# draw the L
turtle.up()
turtle.goto(-200, 100)
turtle.down()
turtle.goto(-200, -100)
turtle.goto(-75, -100)

turtle.up()
turtle.goto(-25, -100)
turtle.down()

# draw the N
turtle.goto(-25, 100)
turtle.goto(100, -100)
turtle.goto(100, 100)
