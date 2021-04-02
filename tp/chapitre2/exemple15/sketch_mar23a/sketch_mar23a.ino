#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x20,20,4);
LiquidCrystal_I2C lcd2(0x27,20,4);
unsigned long cmpt =0;

void setup() {

lcd1.begin();
lcd2.begin();

lcd1.backlight();
lcd2.backlight();

lcd1.setCursor(3,1);
lcd1.print("  Azul          ");

lcd2.setCursor(3,0);
lcd2.print("aslama");

}

void loop() {

lcd1.setCursor(3,1);
lcd1.print(millis()/1000);

lcd2.setCursor(3,1);
lcd2.print(cmpt);
cmpt++;

}
