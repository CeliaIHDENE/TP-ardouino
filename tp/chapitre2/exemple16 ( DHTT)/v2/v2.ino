#include "DHT.h"
#include <SoftwareSerial.h>

#define DHTPIN 7
#define DHTTYPE DHT22 
#define led 8

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
Serial.begin(9600);
pinMode(led,OUTPUT);

}

void loop() {

int temp = dht.readTemperature();
int hum  = dht.readHumidity();

Serial.print("Temperature : "); Serial.println(temp);

Serial.print("Humidité : "); Serial.println(hum);

delay(1000);

if(hum > 50)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW); 
}


}
