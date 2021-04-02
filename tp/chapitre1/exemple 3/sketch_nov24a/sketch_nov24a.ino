
void setup() {
  
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
}

void loop()
{
  PORTD=B00000001; delay(100);
  PORTD=B00000010; delay(100);
  PORTD=B00000100; delay(100);
  PORTD=B00001000; delay(100);
  PORTD=B00010000; delay(100);
  PORTD=B00100000; delay(100);
  PORTD=B01000000; delay(100);
  PORTD=B10000000; delay(100);

  PORTD=B10000000; delay(100);
  PORTD=B01000000; delay(100);
  PORTD=B00100000; delay(100);
  PORTD=B00010000; delay(100);
  PORTD=B00001000; delay(100);
  PORTD=B00000100; delay(100);
  PORTD=B00000010; delay(100);
  PORTD=B00000001; delay(100);



}
