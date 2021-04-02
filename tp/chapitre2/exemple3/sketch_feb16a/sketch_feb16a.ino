/*
affichage 7 segments est un afficheur qui affiche juste des chiffres et quelques lettres
cet afficheur est fabriqué a base de 7 LEDs 
FAIRE UN PROGRAMME QUI COMPTE DE 0 A 9 EN UTILISANT UN AFFICHEUR CC ( catode commun )

*/
/*b a gnd f g
e d  gnd c .*/

int A=0;
int B=1;
int C=2;
int D=3;
int E=4;
int F=5;
int G=6;

void setup() {

pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);

}

void loop() {

//00
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);0
//01
delay(1000);

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
//2
delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);

delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);

// 04

delay(1000);

digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,LOW);

//05
delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,LOW);

//06

delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);

//07
delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);

//08
delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);

//09
delay(1000);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,LOW);

delay(1000);



}
