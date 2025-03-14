/*
  Trikey.h - Library for moving Trikey robots.
  Created by Lenix Team, March 13, 2025
  Released into the public domain.
*/

#ifndef Trikey_h
#define Trikey_h

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
    void setSpeed(int speed)
    void forward();
    void forwardFor(unsigned long delay);
    void backward();
    void backwardFor(unsigned long delay);
    void turnLeft(unsigned long delay);
    void turnRight(unsigned long delay);
    void stop();
  private:
    int _speed;
    AF_DCMotor _motorL;
    AF_DCMotor _motorR;
};

#endif
