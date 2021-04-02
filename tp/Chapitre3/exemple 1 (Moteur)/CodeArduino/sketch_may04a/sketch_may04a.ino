// faire varier la vitesse du moteur 

int bouton=2;
int MotorControl=11;//pwm
void setup()
{
pinMode(bouton,INPUT_PULLUP);
pinMode( MotorControl,OUTPUT);
}
void loop()
{
  while(digitalRead(bouton)==0)
  delay(20);
  for(int x=0; x<256; x++ )
  {
     analogWrite(MotorControl,x);
     delay(50);
  }
  
  for(int x=255; x>=0; x-- )
   {
     analogWrite(MotorControl,x);
     delay(50);
   }
   delay(1);
}
