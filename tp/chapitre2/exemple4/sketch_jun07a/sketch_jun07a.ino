int A = 0;
int B = 1;
int C = 2;
int D = 3;


void setup() 
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);


  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);

}

void loop() 
{
  digitalWrite(A,LOW); // chiffre 0:0000
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
 
  delay(1000);

  digitalWrite(A,LOW); //chiffre 1:0001
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  
  delay(1000);

  digitalWrite(A,LOW); //chiffre 2:0010
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
 
  delay(1000);

  digitalWrite(A,LOW); //chiffre 3:0011
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
 
  delay(1000);

  digitalWrite(A,LOW); //chiffre 4:0100
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  
  delay(1000);

  digitalWrite(A,LOW); //chiffre 5:0101
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
 
  delay(1000);

  digitalWrite(A,LOW); //chiffre 6:0110
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
 
  delay(1000);

  digitalWrite(A,LOW); //chiffre 7:0111
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  
  delay(1000);

  digitalWrite(A,HIGH); //chiffre 8:1000
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
 
  delay(1000);

  digitalWrite(A,HIGH); //chiffre 9:1001
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  
  delay(1000);
}
