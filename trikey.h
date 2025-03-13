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
    void forwards(int ms);
    void backwards(int ms);
    void spinleft(int ms);
    void spinright(int ms);
    void turnleft(int ms);
    void turnright(int ms);
  private:
    int _L;
    int _R;
    int _speed;
};

#endif
