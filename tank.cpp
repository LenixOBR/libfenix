#include "Arduino.h"
#include "tank.h"

/*Once again, VS Code will comaplain about it being unable to find the path*/

Tank::Tank(int FL, int FR, int BL, int BR)
    : _motorFL(FL), _motorFR(FR), _motorBL(BL), _motorBR(BR) {
    _speed = 255;  // Default speed to max
}

void Tank::stop() 
{
    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);
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

void Tank::turnLeft(unsigned long ms)
{
    _motorFL.setSpeed(_speed / 2); // velocidade reduzida
    _motorBL.setSpeed(_speed / 2);
    _motorFR.setSpeed(_speed);
    _motorBR.setSpeed(_speed);

    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(ms);

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);

    _motorFL.setSpeed(_speed); // Reseta a velocidade
    _motorBL.setSpeed(_speed);
    _motorFR.setSpeed(_speed);
    _motorBR.setSpeed(_speed);
}

void Tank::turnRight(unsigned long ms)
{
    _motorFL.setSpeed(_speed); // velocidade reduzida
    _motorBL.setSpeed(_speed);
    _motorFR.setSpeed(_speed / 2);
    _motorBR.setSpeed(_speed / 2);

    _motorFL.run(FORWARD);
    _motorFR.run(FORWARD);
    _motorBL.run(FORWARD);
    _motorBR.run(FORWARD);

    delay(ms);

    _motorFL.run(RELEASE); // Para os motores
    _motorFR.run(RELEASE);
    _motorBL.run(RELEASE);
    _motorBR.run(RELEASE);

    _motorFL.setSpeed(_speed); // Reseta a velocidade
    _motorBL.setSpeed(_speed);
    _motorFR.setSpeed(_speed);
    _motorBR.setSpeed(_speed);
}