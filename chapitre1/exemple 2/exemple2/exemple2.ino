 // karim vendeur de piece : 06 61 25 12 89


int led_verte = 5;
int led_jaune = 6;
int led_rouge = 7;
int timedelay;

void setup() 
{
  pinMode(led_verte,OUTPUT);
  pinMode(led_jaune,OUTPUT);  
  pinMode(led_rouge,OUTPUT);

}

void loop()
{
  digitalWrite(led_verte,HIGH);
   digitalWrite(led_jaune,LOW); 
   digitalWrite(led_rouge,LOW);
   delay(timedelay);
   digitalWrite(led_verte,LOW);
   digitalWrite(led_jaune,HIGH); 
   digitalWrite(led_rouge,LOW);
   delay(timedelay);
     digitalWrite(led_verte,LOW);
   digitalWrite(led_jaune,LOW); 
   digitalWrite(led_rouge,HIGH);
   delay(timedelay);
}


