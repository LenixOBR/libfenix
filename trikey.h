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

class Trikey
{
  public:
    Trikey(int L, int R);
    void setSpeed(int speed)
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
  private:
    int _L;
    int _R;
    int _speed;
};

#endif
