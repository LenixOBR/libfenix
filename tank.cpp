#include "Arduino.h"
#include "tank.h"

/*Once again, VS Code will comaplain about it being unable to find the path*/

Tank::Tank(int FL, int FR, int BL, int BR)
    : _motorFL(FL), _motorFR(FR), _motorBL(BL), _motorBR(BR) {
    _speed = 255;  // Default speed to max
}

void Tank::coast() 
{
    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

void Tank::stop() 
{
    _motorFL.run(BRAKE); // Para os motores
    _motorFR.run(BRAKE);
    _motorBL.run(BRAKE);
    _motorBR.run(BRAKE);
}

void Tank::setSpeed(int speed)
{
    _speed = speed;
    _motorFL.setSpeed(speed);
    _motorFR.setSpeed(speed);
    _motorBL.setSpeed(speed);
    _motorBR.setSpeed(speed);
}

void Tank::forward()
{
    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);
}

void Tank::forwardFor(unsigned long ms) 
{
    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(ms); // Espera o tempo especificado

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

void Tank::backward() 
{
    _motorFL.run(BACKWARD);
    _motorFR.run(BACKWARD);
    _motorBL.run(BACKWARD);
    _motorBR.run(BACKWARD);
}

void Tank::backwardFor(unsigned long ms) 
{
    _motorFL.run(BACKWARD);
    _motorFR.run(BACKWARD);
    _motorBL.run(BACKWARD);
    _motorBR.run(BACKWARD);

    delay(ms); // Espera o tempo especificado

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

void Tank::spinLeft()
{
    _motorFL.run(BACKWARD);
    _motorBL.run(BACKWARD);
    _motorFR.run(FORWARD);
    _motorBR.run(FORWARD);
}

void Tank::spinLeftFor(unsigned long ms)
{
    _motorFL.run(BACKWARD);
    _motorBL.run(BACKWARD);
    _motorFR.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(ms); // Espera o tempo especificado

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

void Tank::spinRight()
{
    _motorFL.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorFR.run(BACKWARD);
    _motorBR.run(BACKWARD);
}

void Tank::spinRightFor(unsigned long ms)
{
    _motorFL.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorFR.run(BACKWARD);
    _motorBR.run(BACKWARD);

    delay(ms); // Espera o tempo especificado

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

void Tank::turnLeftFor(unsigned long ms)
{
    _motorFL.run(BRAKE);
    _motorBL.run(BRAKE);
    _motorFR.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(ms);

    _motorFR.run(RELEASE); // Para os motores
    _motorBR.run(RELEASE);

}

void Tank::turnLeft()
{
    _motorFL.run(BRAKE);
    _motorBL.run(BRAKE);
    _motorFR.run(FORWARD);
    _motorBR.run(FORWARD);
}

void Tank::turnRightFor(unsigned long ms)
{
    
    _motorFR.run(BRAKE);
    _motorBR.run(BRAKE);
    _motorFL.run(FORWARD);
    _motorBL.run(FORWARD);

    delay(ms);

    _motorFL.run(RELEASE); // Para os motores
    _motorBL.run(RELEASE);
}

void Tank::turnRight()
{
    _motorFR.run(BRAKE);
    _motorBR.run(BRAKE);
    _motorFL.run(FORWARD);
    _motorBL.run(FORWARD);
}

// In Tank.cpp
void Tank::move(int speedL, int speedR)
{
    _motorFL.setSpeed(abs(speedL));
    _motorFR.setSpeed(abs(speedR));
    _motorBL.setSpeed(abs(speedL));
    _motorBR.setSpeed(abs(speedR));

    _motorFL.run(speedL >= 0 ? FORWARD : BACKWARD);
    _motorFR.run(speedR >= 0 ? FORWARD : BACKWARD);
    _motorBL.run(speedL >= 0 ? FORWARD : BACKWARD);
    _motorBR.run(speedR >= 0 ? FORWARD : BACKWARD);
}
