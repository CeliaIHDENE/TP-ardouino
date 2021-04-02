/* la methode du clvier matriciel 
1- on declare le nombre de lignes : const byte ROWS=nombre de ligne X
2- on declare le nombre de colomne  : const byte COLS =nombre de colomne Y
3- on declare forme du clavier : char nom du clavier [rows][cols]=
{  { '1','2','3','A'}
   { '4','5','6','B'}
   { '7','8','9','C'}
   { '*','0','#','D'}
};

4-Rreciser sur quelles broche sont connectées les lçgnes et les colonnes  du clavier sur machine
byte  rowPin[ROWS] = {pinN°1,pinN°2,pinN°3,pinN°4}
byte colPin[cols]  = {pinN°5,pinN°6,pinN°7,pinN°8}

5-keypad customkeypad= keypad make keymap (nom du clavier,rowPin,colPin,Rows,Cols)

6- creer une variable de type char qui recoit la valeur issue du clavier
nom de la variable = keypad.getKey();
*/


#include <Keypad.h>
#include <SoftwareSerial.h>
const byte ROWS = 4 ; 
const byte COLS = 4 ; 
char mon_clavier [ROWS][COLS] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
  
  };

byte  rowPin[ROWS] = {5,4,3,2};
byte colPin[COLS]  = {9,8,7,6};
  
Keypad customKeypad = Keypad(makeKeymap(mon_clavier),rowPin,colPin,ROWS,COLS);
void setup() {
Serial.begin(9600); 
}

void loop() {
char customKey=customKeypad.getKey();

if(customKey)
{
  Serial.println(customKey);
}

}
