#include "Arduino.h"
#include "tank.h"

/*Once again, VS Code will comaplain about it being unable to find the path*/

Tank::Tank(int FL, int FR, int BL, int BR)
{
    AF_DCMotor _motorFL(FL); 
    AF_DCMotor _motorFR(FR); 
    AF_DCMotor _motorBL(BL); 
    AF_DCMotor _motorBR(BR); 
}

Tank::stop() 
{
    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}

Tank::setSpeed(int speed)()
{
    _motorFL.setSpeed(speed);
    _motorFR.setSpeed(speed);
    _motorBL.setSpeed(speed);
    _motorBR.setSpeed(speed);
}

Tank::forward()
{
    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);
}

void Tank::forwardFor(unsigned long delay) 
{
    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(delay); // Espera o tempo especificado

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

void Tank::backwardFor(unsigned long delay) 
{
    _motorFL.run(BACKWARD);
    _motorFR.run(BACKWARD);
    _motorBL.run(BACKWARD);
    _motorBR.run(BACKWARD);

    delay(delay); // Espera o tempo especificado

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
}
