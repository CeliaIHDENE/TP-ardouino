// faire un prg utilisant une fct void pour calculer  une moyenne


void setup() {
  Serial.begin(9600);
  Serial.println("Moyenne semestre 1 :");
  calculMoy();
  Serial.println("félicitations rendez vous au rattrapge!!!!");


}

void calculMoy()
{
  float bda =10;
  float cse=10;
  float psr = 10;
  float ptr = 12;
  float sec = 10;
  float fr = 14;
  float ang =14;
  float archi = 10;
  float rntic = 12;

  float moy = ((bda*3)+(cse*2)+(psr*3)+(ptr*2)+sec+fr+ang+(archi*2)+(rntic*2))/17;

  Serial.println(moy);
}

void loop() {
  // put your main code here, to run repeatedly:

}
