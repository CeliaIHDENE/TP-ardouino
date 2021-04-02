int ledPin [] = {7,8,9,10,11,12,13};
int waittime = 500;

void setup() {

  for(int i=0 ; i<7; i++)
  {
      pinMode(ledPin[i],OUTPUT);
      digitalWrite(ledPin[i],LOW);
  }
}

void loop() {
  
  for(int i=0 ; i<7; i++)
  {
  digitalWrite(ledPin[i], HIGH);
  delay(waittime);
  digitalWrite(ledPin[i], LOW);
  delay(waittime);
  }
  
  
}

// NB : faire trés attention on peut avoir des valeurs désirées !!!
