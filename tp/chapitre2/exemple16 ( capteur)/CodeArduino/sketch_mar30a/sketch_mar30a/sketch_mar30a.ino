#include <dht.h>
dht DHT 
#define DHT22_PIN7
#define LED 8
#include 

void setup() {
  // put your setup code here, to run once:
seria.begin(9600);
PinMode(LED, OUTPUT);

}

void loop() {
  
int donne_capteur=DHT.read22(DHT22_PIN);
Serial.print("TEMPERATURE=");
Serial.println(DHT.temperature);
Serial.print("Humidité=");
Serial.println(DHT.humidity);
delay(1000);//pour quil ai le temps
if(DHT.humidity>70)
{digitalWrite(LED,HIGH);
}
else 
{digitalWrite(LED,LOW);
}

}
