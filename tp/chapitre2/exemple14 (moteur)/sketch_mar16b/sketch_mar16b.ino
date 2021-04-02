/* faire un schema et son prg qui permet de :
 *  - un msg d'accueil s'affiche comme suit "salam alaykum azul"
 *                                               commande
 *                                              sens moteur
 *                                             cls TIZI OUZOU 
 * puis sur la 1ere ligne sur cette afficheur le message : selectionner le sens 
 * deux BP nous permettent de choisir le sens voulu ( gauche ou droite)
 * apres avoir choisi un sens le moteur commence a fonctionné en meme temps une led temoin pour chaque sens s'allume en meme temps le sens choisi s'afficher sur l'afficheur de cette façon :
 *        moteur tourne 
 *        sens gauche
 *        
 *        module i2c
 */

 #include <LiquidCrystal.h>
 const int rs=7, en=6, d4=5, d5=4, d6=3, d7=2;
 LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
 #define bp1 8
 #define bp2 9
 #define led1 10
 #define led2 11
 #define sd 13
 #define sg 14


void setup() {

  lcd.begin(20,4);
  
  pinMode(bp1,INPUT_PULLUP);
  pinMode(bp2,INPUT_PULLUP);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);

  pinMode(sd,OUTPUT);
  pinMode(sg,OUTPUT);
  
  digitalWrite(sd,LOW);
  digitalWrite(sg,LOW);

  lcd.setCursor(0,0);
  lcd.print("salam alaykum + azul");
  
  lcd.setCursor(5,1);
  lcd.print("commande");
  
  lcd.setCursor(3,2);
  lcd.print("sens moteur");  

  lcd.setCursor(2,3);
  lcd.print("cls T-O");

  delay(3000);
  lcd.clear();
}

void loop() {

  while(digitalRead(bp1) == HIGH && digitalRead(bp2) == HIGH)
  {
    lcd.setCursor(1,0);  
  }
  
  while( (digitalRead(bp1) == LOW) && (digitalRead(bp2) == HIGH) )
  {
    delay(10); // anti ruban
    digitalWrite(led1,HIGH); digitalWrite(led2,LOW);
    digitalWrite(sd,HIGH); digitalWrite(sg,LOW);
    lcd.setCursor(3,0); lcd.print("moteur tourne");
    lcd.setCursor(4,1); lcd.print("sens droit");

    if (digitalRead(bp2) == LOW)
    {
      delay(10);
      break; 
    }
  }

  digitalWrite(led1,LOW);   digitalWrite(sd,LOW); 
  lcd.clear();
  
  while(digitalRead(bp2) == LOW && digitalRead(bp1) == HIGH)
  {
    delay(10); // anti ruban
    digitalWrite(led1,LOW); digitalWrite(led2,HIGH);
    digitalWrite(sd,LOW); digitalWrite(sg,HIGH);
    lcd.setCursor(3,0); lcd.print("moteur tourne");
    lcd.setCursor(4,1); lcd.print("sens gauche");

    if (digitalRead(bp1) == LOW)
    {
      delay(10);
      break; 
    }
  }
  
  digitalWrite(led2,LOW);   digitalWrite(sg,LOW); 
  lcd.clear();

  while(digitalRead(bp1) == LOW && digitalRead(bp2) == LOW)
  {
    delay(10); // anti ruban
    digitalWrite(led1,HIGH); digitalWrite(led2,HIGH);
    digitalWrite(sd,LOW); digitalWrite(sg,LOW);
    lcd.setCursor(3,0); lcd.print("ERROR !!!!!!!");
    lcd.setCursor(4,1); lcd.print("MOTEUR EN ARRET");
  }
}
