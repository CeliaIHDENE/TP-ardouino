int tableau[11];

void setup() {

Serial.begin(9600);
for (int i=0;i<12;i++)
{
  tableau[i] = i;
}


}

void loop() {
  
for (int i=0;i<15;i++)
{
  Serial.println(tableau[i]);
  delay(100);
}

  

}
