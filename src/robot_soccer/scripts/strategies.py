import math as m
import plays as p
import kickTime as k
from controller import *
#import motor_control as m
import time

count = 0
def strategy_init(data):
    xb = data.ball_x
    yb = data.ball_y
    xr = data.home1_x
    yr = data.home1_y
    tr = data.home1_theta
    xf = data.field_width
    yf = data.field_height
    bret = [xr, yr, tr]
    # jamaine = [data.home2_x, data.home2_y, data.home2_theta]

    ball = [xb, yb]
    #goal = [xg, yg]
    field = [xf,yf]
    bretToBall = m.sqrt((ball[0]-bret[0])**2+(ball[1]-bret[1])**2)
    bretToGoal = m.sqrt((P.goal[0]-bret[0])**2+(P.goal[1]-bret[1])**2)
    jamaineToBall = m.sqrt((ball[0]-bret[0])**2+(ball[1]-bret[1])**2)
    # here we will pick tactics and call the functions

    p.getBall(bret,ball,field)
    



'''
    k.kickTime(bretToGoal, bretToBall)

    if bretToBall < .01:
        p.goToGoal(bret)
        if data.home1_x > 1.6 and data.home1_y < -0.01:
            p.goCenter(data)  # reset robot to go center field
            time.sleep(5)
    # if jamaineToBall < 0.02:
    #    kick.kick()
    #    time.sleep(0.5)

    # reset robot positions
    # elif keys[K_SPACE]:
    #   print('Start positions!')
    #   # p.goToStartDefender(jamaine)
	#   p.goToStartForward(bret)

    elif G.reset == True:       # resets the robots
        p.goToStartForward(bret)
        # p.goToStartDefender(jamaine)

    elif G.pause == False:      # pauses the game
        p.holdPosition()

    else:
        #p.goToBall(bret, ball)
        p.getBall(data)
        #p.goToStartDefender(jamaine)
        #p.defendBall(jamaine,ball)
    #p.getBall(data)
'''