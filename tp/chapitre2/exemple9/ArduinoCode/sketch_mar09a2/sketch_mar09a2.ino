// FAIRE DEFILLER UN MOT DE DROITE A GAUCHE ET INVERS
#include <LiquidCrystal.h>

LiquidCrystal Lcd(7,6,5,4,3,2);  

void setup() {
  // put your setup code here, to run once:
 Lcd.begin(20,4);
 Lcd.setCursor(00,0);
 Lcd.print("happy");
 delay(1000);
}

void loop() {
  for(int positioncmp=0;positioncmp<8;positioncmp++)
 { Lcd.scrollDisplayRight();
  delay(300);
  }

for(int positioncmp=0;positioncmp<8;positioncmp++)
{Lcd.scrollDisplayLeft();
  delay(300);
  }
  
    

}
