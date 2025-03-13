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

class Tank
{
  public:
    Tank(int FL, int FR, int BL, int BR);
    void setSpeed(int speed)
    void forwards(int ms);
    void backwards(int ms);
    void spinleft(int ms);
    void spinright(int ms);
    void turnleft(int ms);
    void turnright(int ms);
  private:
    int _FL;
    int _FR;
    int _BL;
    int _BR;
    int _speed;
};

#endif

