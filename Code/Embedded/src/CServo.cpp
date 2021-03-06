#include "CServo.h"
#include <Arduino.h>

CServo::CServo() : Servo(), CInterface(DEFAULT_SERVO_PIN), angle(0) {
    init();
    enable();
    setAngle(angle);
}

CServo::CServo(const int pin_number) : Servo(), CInterface(pin_number), angle(0) {
    init();
    enable();
    setAngle(angle);
}

void CServo::setAngle(const float target_angle) {
     if(enabled) {
         Assert(target_angle <= 180 && target_angle >= 0); 
         if (target_angle != angle) {
           // PrintDbgValue(String("Servo[") + String(pin) + String("]"), target_angle);
            angle = target_angle;
            this->write(angle); 
        }
     }
}

void CServo::init() {
   // PrintDbgValue("Init servo on pin ", pin);
    this->Servo::attach(pin); 
    enabled = 1; 
}

float CServo::getAngle() const {
    return angle;
}

void CServo::enable() { 
  enabled = 1; 
}

void CServo::disable() { 
  enabled = 0; 
}











