//ecrire un programme qui permet d ecrire a partir d un originateur 
#include <LiquidCrystal.h>

LiquidCrystal Lcd(7,6,5,4,3,2);  

void setup() {
  // put your setup code here, to run once:
 Lcd.begin(20,4);
 Serial.begin(9600);
  
 
}

void loop() {
  if (Serial.available() )
{
delay(10);
Lcd.clear();
while(Serial.available() )
{
Lcd.w

rite(Serial.read() );
delay(100);
}
  }

}
