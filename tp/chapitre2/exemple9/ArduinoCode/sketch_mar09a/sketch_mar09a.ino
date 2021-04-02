// faire un programe qui afiche une phrase 

#include <LiquidCrystal.h>
const int rs=5 , en=4 , d4=3;,d5=2, d6=1,d7=0;
LiquidCrystal Lcd(rs,en,d4,d5,d6,d7);  

void setup() {
  // put your setup code here, to run once:
  Lcd.begin(20,4);//type d afficheur 
   

}

void loop() {
  // put your main code here, to run repeatedly:
Lcd.setCursor(3,0); //on affiche a la colomne 3 ligne 0 
Lcd.print("happy");
Lcd.setCursor(3,1); //on affiche a la colomne 3 ligne 1
Lcd.print("8 march");
Lcd.setCursor(3,3); //on affiche a la colomne 3 ligne 2
Lcd.print("for us");

}
