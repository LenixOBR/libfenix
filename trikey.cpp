#include "Arduino.h"
#include "trikey.h"

/*Once again, VS Code will comaplain about it being unable to find the path*/

Trikey::Trikey(int L, int R)
    : _motorL(L), _motorR(R){
    _speed = 255;  // Default speed to max
}

void Trikey::stop() 
{
    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);
}

void Trikey::setSpeed(int speed)
{
    _speed = speed;
    _motorL.setSpeed(speed);
    _motorR.setSpeed(speed);
}

void Trikey::forward()
{
    _motorL.run(FORWARD);
    _motorR.run(FORWARD);
}

void Trikey::forwardFor(unsigned long ms) 
{
    _motorL.run(FORWARD);
    _motorR.run(FORWARD);

    delay(ms); // Espera o tempo especificado

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);
}

void Trikey::backward() 
{
    _motorL.run(BACKWARD);
    _motorR.run(BACKWARD);
}

void Trikey::backwardFor(unsigned long ms) 
{
    _motorL.run(BACKWARD);
    _motorR.run(BACKWARD);


    delay(ms); // Espera o tempo especificado

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);
}

void Trikey::spinLeft()
{
    _motorL.run(BACKWARD);
    _motorR.run(FORWARD);
}

void Trikey::spinLeftFor(unsigned long ms)
{
    _motorL.run(BACKWARD);
    _motorR.run(FORWARD);

    delay(ms); // Espera o tempo especificado

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);
}

void Trikey::spinRight()
{
    _motorL.run(FORWARD);
    _motorR.run(BACKWARD);
}

void Trikey::spinRightFor(unsigned long ms)
{
    _motorL.run(FORWARD);
    _motorR.run(BACKWARD);

    delay(ms); // Espera o tempo especificado

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);
}

void Trikey::turnLeft(unsigned long ms)
{
    _motorL.setSpeed(_speed / 2); // velocidade reduzida
    _motorR.setSpeed(_speed);

    _motorL.run(FORWARD);
    _motorR.run(FORWARD);

    delay(ms);

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);

    _motorL.setSpeed(_speed); // Reseta a velocidade
    _motorR.setSpeed(_speed);
}

void Trikey::turnRight(unsigned long ms)
{
    _motorL.setSpeed(_speed); // velocidade reduzida
    _motorR.setSpeed(_speed / 2);

    _motorL.run(FORWARD);
    _motorR.run(FORWARD);

    delay(ms);

    _motorL.run(RELEASE); // Para os motores
    _motorR.run(RELEASE);

    _motorL.setSpeed(_speed); // Reseta a velocidade
    _motorR.setSpeed(_speed);
}
