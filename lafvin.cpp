#include "Arduino.h"
#include "lafvin.h"

Lafvin::Lafvin(int speed){
    _speed = speed;
}

void setSpeed(int speed){
    _speed = speed;
}

void forward(){
    digitalWrite(2,HIGH);
    analogWrite(5,_speed);
    digitalWrite(4,HIGH);
    analogWrite(6,_speed);
}

void forwardFor(unsigned long ms){
    digitalWrite(2,HIGH);
    analogWrite(5,_speed);
    digitalWrite(4,HIGH);
    analogWrite(6,_speed);

    delay(ms);

    analogWrite(5,0);
    analogwrite(6,0);
}

void backward(){
    
}