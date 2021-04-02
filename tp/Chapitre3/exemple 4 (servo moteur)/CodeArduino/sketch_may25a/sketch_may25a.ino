#include <Servo.h>

Servo myservo ;//creation d un objet pour le controle du servo
int pos=0 ;// var pour memorisé la position du servo

void setup() {
  // put your setup code here, to run once:
myservo.attach(13) ;//Brancher le cervo a la patte9 pour l'objet servo

}

void loop() {
  // put your main code here, to run repeatedly:
for (pos=0;pos<=180;pos++ )
  { //vane de 0 a 180 par pas de 1   
  myservo.write(pos);
  delay(15);
  }
  
  for (pos=180;pos>0;pos-=1)
  {
  myservo.write(pos);
  delay(15); 
  }
  

}
