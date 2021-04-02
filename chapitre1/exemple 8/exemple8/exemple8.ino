int button = 13;
int LED1 = 3;
int LED2 = 2;



void setup() 
{

pinMode(button,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);


}

void loop() 
{

  while(digitalRead(button)==LOW)
  {
    digitalWrite(LED1,HIGH);
  }

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(300);
  digitalWrite(LED2,LOW);
  delay(300);

}
