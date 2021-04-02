// exemple 5 améliotré rq : l'etat que le btn prend peut etre memorisé dans une var de ce fait le prg sera :
int button= 13;
int led=2;
int btn_state;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  btn_state = HIGH;
}

void loop() 
{
btn_state = digitalRead(button);
if(btn_state==LOW)
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
