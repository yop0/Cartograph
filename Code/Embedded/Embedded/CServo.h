//
// Created by yop on 30/03/17.
//

#ifndef EMBEDDED_SERVO_H
#define EMBEDDED_SERVO_H

#include "CInterface.h"
#include <Servo.h>

#define DEFAULT_SERVO_PIN 5


class CServo : public CInterface, public Servo {
    protected:
        float angle;

        /* Fonction init()
        * Permet d'initialiser un servo
        * Initialise la pin d'attache pour l'utiliser en pwm
        */
        void init();

    public:
        CServo();
    
        CServo(const int pin_number);
    
        float getAngle() const;
    
        /* Fonction setAngle()
         * Calcule la taille de pulse a envoyer pour deplacer le servo a l'angle souhaite
         * Envoie ce pulse
         */
        void setAngle(const float target_angle);
    
        void enable();
    
        void disable();

        virtual void attach(const unsigned int pin_number) override; 

};

#endif //EMBEDDED_SERVO_H

