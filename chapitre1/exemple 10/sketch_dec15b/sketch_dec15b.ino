/*
  Ennoncé du tp : commandé une lampte de 220v
    
*/

int lampe_220v=13;
int pushBtn = 3;
byte btnState = 0;
void setup() {

  pinMode(pushBtn,INPUT);
  pinMode(lampe_220v,OUTPUT);
  digitalWrite(lampe_220v,LOW);
}

void loop() {

  if(digitalRead(pushBtn)==LOW)
  {
    delay(50);
    btnState = !btnState;
    digitalWrite(lampe_220v,btnState);   
  }

}
