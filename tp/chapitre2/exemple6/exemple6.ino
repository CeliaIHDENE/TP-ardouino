byte seg[] = {B00111111,B01011011,B01001111,B01100110,
              B01101101,B01111101,B00000111,B01111111,
              B01101111};

long compteur=0;
#define D1 A0
#define D2 A1
#define D3 A2
#define D4 A3

void setup() {
  
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);

DDRD = B01111111;

}

void loop() {

compteur++;

 if (compteur > 9999 )
 {
    compteur = 0;
 }

unsigned char millieme = compteur/1000;

digitalWrite(D1,HIGH);
digitalWrite(D2,LOW);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);

PORTD = seg[millieme];
delay(5);

unsigned char centieme = (compteur/100)%10;

digitalWrite(D1,LOW);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);

PORTD = seg[centieme];
delay(5);

unsigned char dixieme = (compteur/10)%10;

digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);

PORTD = seg[dixieme];
delay(5);

unsigned char unite = compteur%10;

digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
digitalWrite(D3,LOW);
digitalWrite(D4,HIGH);

PORTD = seg[unite];
delay(5);




}
