import math as m
import plays_jamaine as p
import kickTime as k
import predictor
from classes import *


def strategy_init(data):
    xb = data.ball_x
    yb = data.ball_y
    xr = data.home2_x
    yr = data.home2_y
    tr = data.home2_theta

    jamaine = [xr, yr, tr]
    ball = [xb, yb]
    jamaineToBall = m.sqrt((ball[0]-jamaine[0])**2+(ball[1]-jamaine[1])**2)
    jamaineToGoal = m.sqrt((P.goal[0]-jamaine[0])**2+(P.goal[1]-jamaine[1])**2)

    #ball = predictor.predict(ball)

    # here we will pick tactics and call the functions

    k.kickTime(jamaineToGoal, jamaineToBall)

    if jamaineToBall < .01:
        p.goToGoal(jamaine)
        print('Put it in the net')

    elif G.reset == True:       # resets the robots
        p.goToStartForward(jamaine)

    elif G.pause == True:      # pauses the game
        p.holdPosition()

    else:
        p.goToBall(jamaine, ball)
        print('Get the ball')

    # G.ballPast = ball

def reset():
    G.reset = True


def pause():
    G.pause = True


def go():
    G.pause = False
    G.reset = False
