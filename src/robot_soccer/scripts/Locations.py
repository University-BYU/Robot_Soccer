
import math
from param import *

class RobotLocation():
  def __init__(self, x = 0.0, y = 0.0, theta = 0.0):#, magnitude = 0.0, angle = 0.0):
    #self.timestamp = timestamp
    self.x = x
    self.y = y
    self.theta = theta
    # self.magnitude = magnitude
    # self.angle = angle
  def __call__(self,x,y,theta):
      self.x =x
      self.y = y
      self.theta = theta
    
class BallLocation():
  def __init__(self, x = 0.0, y = 0.0):#, magnitude = 0.0, angle = 0.0):
    #self.timestamp = timestamp
    self.x = x
    self.y = y
    #self.magnitude = magnitude
    #self.angle = angle
  def __call__(self,x,y):
    self.x =x
    self.y = y


class Locations():
    def __init__(self):
        #self.timestamp = 0
        self.home1 = RobotLocation()
        self.home2 = RobotLocation()
        self.away1 = RobotLocation()
        self.away2 = RobotLocation()
        self.ball = BallLocation()


    def getHome1(self):
        return self.home1

    #def setHome1(self):
    #    self.home1


    #def setTimestamp(self,timestamp):
     #   self.timestamp = timestamp;
        # self.home1.timestamp = 0 # timestamp
        # self.home2.timestamp = timestamp
        # self.away1.timestamp = timestamp
        # self.away2.timestamp = timestamp
        # self.ball.timestamp = 0 #timestamp

    def robotCameraAngleCorrection(self, robot_x, robot_y):
        angleField = math.atan2(robot_y, robot_x)
        mag = math.sqrt(robot_x**2+robot_y**2)
        if mag == 0:
          return robot_x, robot_y
        else:
          angleCamera = math.atan(HEIGHT_CAMERA/mag)
        offset = HEIGHT_ROBOT / math.tan(angleCamera)
        ret_x = robot_x - offset * math.cos(angleField)
        ret_y = robot_y - offset * math.sin(angleField)
        return ret_x, ret_y      

    
    def setLocationsFromMeasurement(self,data):
        #self.setTimestamp(timeToInt(data.header.stamp))
        self.home1_x, self.home1_y = self.robotCameraAngleCorrection(data.home1_x, data.home1_y)
        self.home1_theta = data.home1_theta
        self.home2.x, self.home2.y = self.robotCameraAngleCorrection(data.home2_x,data.home2_y)
        self.home2.theta = data.home2_theta
        self.away1.x, self.away1.y = self.robotCameraAngleCorrection(data.away1_x,data.away1_y)
        self.away1.theta = data.away1_theta
        self.away2.x, self.away2.y = self.robotCameraAngleCorrection(data.away2_x, data.away2_y)
        self.away2.theta = data.away2_theta
        self.ball_x = data.ball_x
        self.ball_y = data.ball_y
        
    #def getDiscreteSample(self):
        #home1_x = meterToPixel(self.home1_x);
        #home1_y = meterToPixel(self.home1_y);
        #home1_theta = radianToDegree(self.home1_theta);
        #home2_x = meterToPixel(self.home2_x);
        #home2_y = meterToPixel(self.home2_y);
        #home2_theta = radianToDegree(self.home2_theta);
        #away1_x = meterToPixel(self.away1_x);
        #away1_y = meterToPixel(self.away1_y);
        #away1_theta = radianToDegree(self.away1_theta);
        #away2_x = meterToPixel(self.away2_x);
        #away2_y = meterToPixel(self.away2_y);
        #away2_theta = radianToDegree(self.away2_theta);
        #ball_x = meterToPixel(self.ball_x);
        #ball_y = meterToPixel(self.ball_y);
        
        #return (home1_x, home1_y, home1_theta,
    #    home2_x, home2_y, home2_theta,
     #   away1_x, away1_y, away1_theta,
      #  away2_x, away2_x, away2_theta,
        #ball_x, ball_y)
