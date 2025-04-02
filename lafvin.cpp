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
    digitalWrite(2,LOW);
    analogWrite(5,_speed);
    digitalWrite(4,LOW);
    analogWrite(6,_speed);
}

void backwardFor(unsigned long ms){
    digitalWrite(2,LOW);
    analogWrite(5,_speed);
    digitalWrite(4,LOW);
    analogWrite(6,_speed);

    delay(ms);

    analogWrite(5,0);
    analogwrite(6,0);
}

void spinLeft(){
    digitalWrite(2,HIGH);
    analogWrite(5,_speed);
    digitalWrite(4,LOW);
    analogWrite(6,_speed);
}

void spinLeftFor(unsigned long ms){
    digitalWrite(2,HIGH);
    analogWrite(5,_speed);
    digitalWrite(4,LOW);
    analogWrite(6,_speed);

    delay(ms);

    analogWrite(5,0);
    analogwrite(6,0);
}

void spinRight(){
    digitalWrite(2,LOW);
    analogWrite(5,_speed);
    digitalWrite(4,HIGH);
    analogWrite(6,_speed);
}

void spinRightFor(unsigned long ms){
    digitalWrite(2,LOW);
    analogWrite(5,_speed);
    digitalWrite(4,HIGH);
    analogWrite(6,_speed);

    delay(ms);

    analogWrite(5,0);
    analogwrite(6,0);
}

void moveRight(){
    analogWrite(5,0);
    digitalWrite(4, HIGH);
    analogWrite(6, _speed);
}

void moveRightFor(unsigned long ms){
    analogWrite(5,0);
    digitalWrite(4, HIGH);
    analogWrite(6, _speed);

    delay(ms);

    analogwrite(6,0);
}

void moveLeft(){
    analogWrite(6,0);
    digitalWrite(2,HIGH);
    analogWrite(5, _speed);
}

void moveLeftFor(unsigned long ms){
    analogWrite(6,0);
    digitalWrite(2,HIGH);
    analogWrite(5, _speed);
    
    delay(ms);

    analogwrite(5,0);
}

void stop(){
    analogWrite(5,0);
    analogwrite(6,0);
}

void preciseMove(int L, int R){
    digitalWrite(2, L > 0) ? HIGH : LOW);
    analogWrite(5, abs(L));
    digitalWrite(4, R > 0) ? HIGH : LOW);
    analogWrite(6, abs(R));
}

void preciseMoveFor(int L, int R, unsigned long ms){
    digitalWrite(2, L > 0) ? HIGH : LOW);
    analogWrite(5, abs(L));
    digitalWrite(4, R > 0) ? HIGH : LOW);
    analogWrite(6, abs(R));

    delay(ms);

    analogWrite(5,0);
    analogwrite(6,0);
}