#include <IRremote.h>
#define relais 1
int RECVPIN=11;
byte etat_relais=0;
IRrecv decodage_de_la_donnee(RECVPIN);
decode_results touche_choisie;


void setup() {

pinMode(relais,OUTPUT);
digitalWrite(relais,LOW);
decodage_de_la_donnee.enableIRIn();
}

void loop() {

if(decodage_de_la_donnee.decode(&touche_choisie))
{
   if(touche_choisie.value == 0X20DF22DD) // touche ok sure
   {
      etat_relais = !etat_relais;
      digitalWrite(relais,etat_relais);
   }

   /*switch (touche_choisie.value)
   {
      case 0X20DF22DD : 
      etat_relais = !etat_relais;
      digitalWrite(relais,etat_relais);
      break;
      
      default : 
      etat_relais = !etat_relais;
      digitalWrite(relais,etat_relais);
   }*/

 decodage_de_la_donnee.resume();
}
delay(5);
}
