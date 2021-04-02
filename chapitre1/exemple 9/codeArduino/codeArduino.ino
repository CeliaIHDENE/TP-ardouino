  int LED1pin=5;
  int SWITCHpin=1;
  bool running=false;
  

void setup() {

pinMode(LED1pin,OUTPUT);
pinMode(SWITCHpin,INPUT_PULLUP); 

}

void loop(){

  if(digitalRead(SWITCHpin)==LOW)
  {
    delay(100); // anti ruban pour le switch
    running = !running; // inverse de la valeur de la variable
    digitalWrite(LED1pin,running); 
    delay(500);
  }
  else
  {
    digitalWrite(LED1pin,LOW);
  }


}
