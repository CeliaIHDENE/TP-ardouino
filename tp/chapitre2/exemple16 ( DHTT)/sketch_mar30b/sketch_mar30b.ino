#include "dht.h"
dht DHT
#define DHT22_PIN 7
#define LED 8

void setup() {

Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {

int donnees_capteur = dht.read22(DHT22_PIN);
Serial.print("Temperature : "); Serial.print(DHT.temperature);

Serial.print("Humidité : "); Serial.print(DHT.humidity);

delay(1000);

if(DHT.humidity > 70)
{
  digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW); 
}


}
