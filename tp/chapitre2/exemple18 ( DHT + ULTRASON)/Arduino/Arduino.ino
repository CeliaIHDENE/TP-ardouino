#include "DHT.h"
#include <LiquidCrystal.h>
#define trigpin 10
#define echopin 13
#define DHTPIN 7
#define DHTTYPE DHT22 

float duration, distance;
float speed;
DHT dht(DHTPIN, DHTTYPE);

const int rs=5, en=4, d4=3, d5=2,d6=1,d7=0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup() {
lcd.begin(20,4);
pinMode(trigpin,OUTPUT);  
pinMode(echopin,INPUT);  

}

void loop() {

int temp = dht.readTemperature();
int hum  = dht.readHumidity();
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

duration = pulseIn(echopin,HIGH); 
speed = 331,4+(0,606*temp)+(0,0124*hum);
distance = (duration/2) * (speed/10000);


  Serial.print("temeprature = ");
  Serial.println(temp);
  Serial.print("humidité = ");
  Serial.println(hum);



if(distance >= 400 || distance <= 2 ){
lcd.setCursor(1,0);
lcd.print("disrance = :");
lcd.setCursor(14,0);
lcd.print("out of range");


delay(1000);
}
else
{
lcd.setCursor(1,0);
lcd.print("Temparature :");
lcd.setCursor(14,0);
lcd.print(temp);

lcd.setCursor(1,1);
lcd.print("Humdite :");
lcd.setCursor(14,1);
lcd.print(hum);

lcd.setCursor(1,2);
lcd.print("Distance :");
lcd.setCursor(14,2);
lcd.print(distance);
delay(1000);
}
delay(1000);
lcd.clear();




}
