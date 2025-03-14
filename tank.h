/*
  Tank.h - Library for moving Tank robots.
  Created by Lenix Team, March 13, 2025
  Released into the public domain.
*/

/*
    VS Code is complaining about arduino.h, let's hope it's nothing.
    https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/ <- guide being used
*/
#ifndef Tank_h
#define Tank_h

#include "Arduino.h"
#include "AFMotor.h"

/*FL=Front Left, FR=Front Right, BL=Back Left, BR=Back Right*/

class Tank
{
  public:
    Tank(int FL, int FR, int BL, int BR);
    void setSpeed(int speed);
    void forward();
    void forwardFor(unsigned long delay);
    void backward();
    void backwardFor(unsigned long delay);
    void spinLeft();
    void spinLeftFor(unsigned long delay);
    void spinRight();
    void spinRightFor(unsigned long delay);
    void turnLeft();
    void turnLeftFor(unsigned long delay);
    void turnRight();
    void turnRightFor(unsigned long delay);
    void stop();
  private:
    AF_DCMotor _motorFL;
    AF_DCMotor _motorFR;
    AF_DCMotor _motorBL;
    AF_DCMotor _motorBR;
};

#endif

