//a l aide de la lib 7 segments refaire l exemple precedent (afficher 4 chiffre)
//on peut afficher des char à l'ade de cette librairie sevseg.setChars("stop");


#include "SevSeg.h"
SevSeg SevSeg ;

void setup() {
 
  byte numDigits = 4;
  byte digitsPins[] = {A0,A1,A2,A3};
  byte segmentPins[] = {0,1,2,3,4,5,6,7};
  byte hardwareConfig = COMMON_CATHODE;
  bool resistorsOnSegments = true;
  bool updateWithDelays = false ; 
  bool leadingZeros = true ;
  sevseg.setBrightness(0);//luminosité
                                  
    sevseg.begin(hardwareConfig,numDigits,digitsPins,segmentPins,resistorsOnSegments,updateWithDelays,leadingZeros);


}

void loop() {

  sevseg.setNumber(23,0);
  sevseg.refreshDisplay();


}
