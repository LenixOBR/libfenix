/*
  Trikey.h - Library for moving Trikey robots.
  Created by Lenix Team, March 13, 2025
  Released into the public domain.
*/

#ifndef trikey_h
#define trikey_h

/*
    VS Code is complaining about arduino.h, let's hope it's nothing.
    https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/ <- guide being used
*/

#include "Arduino.h"
#include "AFMotor.h"

/*L=Left, R=Right*/

class Trikey
{
  public:
    Trikey(int L, int R);
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
    void move(int speedL, int speedR);
    void stop();
    void coast();
  private:
    int _speed;
    AF_DCMotor _motorL;
    AF_DCMotor _motorR;
};

#endif
