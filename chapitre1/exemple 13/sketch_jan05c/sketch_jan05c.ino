int LED = 11;
int PIR = 1;
byte etat_led = 0;

void setup() {

 pinMode(LED,OUTPUT);
 pinMode(PIR,INPUT);

}

void loop() {

  if(digitalRead(PIR) == HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }


}
