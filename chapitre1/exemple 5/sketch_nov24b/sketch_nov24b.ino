// ce prg fait allumé une led connecté sur la broche b5 du port b dés que le button poussoire connecté sur la broche d2 du port d 
int button= 13;
int led=2;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);

}

void loop() 
{

if(digitalRead(button)==0)
{
  delay(10);
  digitalWrite(led,HIGH);
  delay(500);
}
else
{
  digitalWrite(led,LOW);
}
}
