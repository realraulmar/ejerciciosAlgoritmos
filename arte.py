import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(45)
        draw(myTurtle, length - 2)

draw(myTurtle, 100)
myWin.exitonclick()