// faire un prg qui ns permet d'increment et de decrementer un comptage de 0 a 9 a l'aide de 2 bp

int btI = 10;
int btD = 11;
char count;
byte seq[] = {B00000001,B10011111,B00100101,B00001101,B10011001,B01001001,B01000001,B00011111,B00000000,B00001001};
void setup() {

DDRD = B11111110;
pinMode(btI,INPUT_PULLUP);
pinMode(btD,INPUT_PULLUP);


}

void loop() {

if (digitalRead(btI) == LOW)
{
  delay(300);
  count++;
  if (count > 9 ) {count = 9;}
}

if (digitalRead(btD) == LOW)
{
  delay(300);
  count--;
  if (count < 0 ) {count = 0;}
}

switch(count)
{
  case 0 : PORTD = seq[count];
           delay(50);
           break;

  case 1 : PORTD = seq[count];
           delay(50);
           break;  

  case 2 : PORTD = seq[count];
           delay(50);
           break;  
           
  case 3 : PORTD = seq[count];
           delay(50);
           break;
           
  case 4 : PORTD = seq[count];
           delay(50);
           break;   
            
  case 5 : PORTD = seq[count];
           delay(50);
           break;   

             
  case 6 : PORTD = seq[count];
           delay(50);
           break;   

             
  case 7 : PORTD = seq[count];
           delay(50);
           break;

            
  case 8 : PORTD = seq[count];
           delay(50);
           break; 

            
  case 9 : PORTD = seq[count];
           delay(50);
           break;   
}


/*for (int i=0; i<10 ; i++)
  {
     PORTD = seq[i];
     delay(1000);
  }*/
  
}
