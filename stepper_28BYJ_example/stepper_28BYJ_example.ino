
#include "Stepper_28BYJ_48.h"

int switch_1_pin = 10;
int switch_2_pin = 12;

Stepper_28BYJ_48 stepper(7,6,5,4);

//////////////////////////////////////////////////////////////////////////////
void setup() {
  pinMode(switch_1_pin,INPUT_PULLUP);
        pinMode(switch_2_pin,INPUT_PULLUP);

}

//////////////////////////////////////////////////////////////////////////////
void loop() {
  
      if ( digitalRead(switch_1_pin) == LOW ) {
                stepper.step(-1);

        }

        if ( digitalRead(switch_2_pin) == LOW ) {
                stepper.step(1);
        }
  
}



