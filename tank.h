/*
  Tank.h - Library for moving Tank robots.
  Created by Lenix Team, March 13, 2025
  Released into the public domain.
*/

/*
    VS Code is complaining about arduino.h, let's hope it's nothing.
    https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/ <- guide being used
*/
#ifndef tank_h
#define tank_h

#include "Arduino.h"
#include "AFMotor.h"

/*FL=Front Left, FR=Front Right, BL=Back Left, BR=Back Right*/

class Tank
{
  public:
    Tank(int FL, int FR, int BL, int BR);
    void setSpeed(int speed);
    void forward();
    void forwardFor(unsigned long ms);
    void backward();
    void backwardFor(unsigned long ms);
    void spinLeft();
    void spinLeftFor(unsigned long ms);
    void spinRight();
    void spinRightFor(unsigned long ms);
    void turnLeftFor(unsigned long ms);
    void turnLeft();
    void turnRightFor(unsigned long ms);
    void turnRight();
    void stop();
    void coast();
    void move(int speedL, int speedR);

  private:
    int _speed;
    AF_DCMotor _motorFL;
    AF_DCMotor _motorFR;
    AF_DCMotor _motorBL;
    AF_DCMotor _motorBR;
};

#endif

