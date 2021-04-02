int ledR = 3;
int ledV = 4;
int ledJ = 5;



void compare_fonction(char valeur_consigne)
{
  if(valeur_consigne==10)
  {
    digitalWrite(ledR,HIGH);
  }
  else
  if(valeur_consigne<10)
  {
    digitalWrite(ledV,HIGH);
  }
  else
  {
    digitalWrite(ledJ,HIGH);
  }
}
void setup()
{
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledJ,OUTPUT);

  compare_fonction(10);
  
 }

void loop() 
{
 

}
