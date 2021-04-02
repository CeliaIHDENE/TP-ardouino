//affichage 7 seg avec une librerie 
//afficheur 7segments avec une librairie
//la fct qui ns permet de gerer les afficheurs 7 segments est : sevseg.begin(hardwarconfig,numDigits,digitPins,SegmentPin,resistorsOnSegment,updateWithDelay.LeadingZeros);
//Hardwarconfig : permet de definir le type d'afficheur utilise  cad anode commune ou cathode commune
//numdigit : definit le nbr de chiffres a afficher 
//digitPins[] = {} : les broches de la carte arduino ou les communs des afficheurs 7 seg sont connesctes
//SegmentPins = {} : tableau qui definit quelle broche de la carte arduino qui sont connectes a chaque segment de l'afficheur l'ordre est alphabetique [a,b,c,d,e,f,g,dp]
//resistorsOnSegment : les afficheurs utilisent des leds pr afficher donc on doit utiliser des resistances de limitationdn de courant soit en serie sur les broches 
//digitPins dans ce cas une resistance de 330 hom est une valeur bien adaptee, soit on utilise des resistances de lim de courant sur les broches de chaque segmentdans 
//ce cas on doit configurer resistorsOnSegment=true (recommendee)
//updateWithDelay : updateWithDelay = false (recommendee par default)
//LeadingZeros : avoir le choix si ou nn afficher les 0 ex : aff 4 segmets 0011 true : affiche les 0
//                                                                              false : affiche pas les 0 
//sev.segBrightness() : permet de regler la luminosite de l'afficheur, peut etre regulee de 
//sev.segNumber() : la fct permet d afficher le chiffre sur l'afficheur 7 segments, vs pouvez egalement les afficher avec des points decimaux, par ex : pr afficher le chiffre 5,999
//sev.segNumber(5999,3) ==> 5,999
//sev.segRefreshDispslay() : elle est necessaire a la fin de la boucle loop() pr continuer a afficher le chiffre voulu notez que tt delay induit par d'autres 
//fct produira des effets indesirables sur l'afficheur

//EX1 : faire un pg et son schema qui permet d'afficher le chiffre 23

#include "SevSeg.h"
SevSeg sevseg;

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
