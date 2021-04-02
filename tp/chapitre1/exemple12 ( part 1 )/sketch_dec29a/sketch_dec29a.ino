    #include <IRremote.h> 
    
    int RECVPIN=11;
    IRrecv decodage(RECVPIN); //prepare a decodage patte 11
    decode_results touche_choisie ;//prepare  resultat
    
 void setup() {
    Serial.begin (9600);//init port serie 
    decodage.enableIRIn();//debut de reception 
    
  }
  
 void loop() {
      if (decodage.decode(& touche_choisie))// si ya @du code envoi dans touche choisi
      { 
        Serial.println(touche_choisie.value,HEX);
        decodage.resume();
        }
      delay(300);
  }
