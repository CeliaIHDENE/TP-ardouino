// led clignotante
// remarque toute les broches de la carte arduino peuvent etre nommé
// exemple :  au lieu d'ecrire 13 on ecrit int led=13;

void setup() {

  
  pinMode(13,OUTPUT); //instruction qui permet de configurer une broche sois en input ou bien en output

}

void loop() {
  

  digitalWrite(13,HIGH); // instr pour allumer la led sur le port 13 (donner un etat logique pour une patte)
  delay(1000); // durée en ms tjrs
  digitalWrite(13,LOW);  // instr pour eteindre la led sur le port 13
  delay(1000); // durée en ms tjrs
}
