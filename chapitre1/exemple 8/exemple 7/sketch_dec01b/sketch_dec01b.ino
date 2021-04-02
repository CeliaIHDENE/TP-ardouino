// refaire le prg en utilisant une resistance PULL UP  ( button sur la broche 2 / et la led sur la broche 9) ( pull up pour les entrées )
// le port D possede une resistance interne
// point rouge 5v // jaune courte circuit // bleu 0v // gris inderterminé



int button= 2;
int led=9;
void setup()
{
  /*pinMode(0,INPUT_PULLUP); // connexion (appel a la resistance de tirage)
  pinMode(1,INPUT_PULLUP); */
  pinMode(button,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop() 
{
if(digitalRead(button)==LOW)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}
}
