#include <PWM.h>
#define moteur 9
int32_t frequency=100 ;


void setup() {

InitTimersSafe();
SetPinFrequencySafe(moteur,frequency);
}

void loop() {
  
  // put your main code here, to run repeatedly:
int potValeurs=analogRead(A0);
int pwmOutput=map(potValeurs,0,1023,0,255); 
pwmWrite(moteur,pwmOutput);
delay(30);
}
