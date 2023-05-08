/*
Connect row pins to 2,3,4,5 pins in the board
Connect col pins to 6,7,8,9 pins in the board
ROWS and COLS are declared in caps because of 'const'
all inputs and declarations are only character datatype
*/
#include<Keypad.h>

const char ROWS = 4;
const char COLS = 4;

char allKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

char rowPins[ROWS] =  {2,3,4,5};
char colPins[COLS] =  {6,7,8,9};

Keypad keypad = Keypad(makeKeymap(allKeys), rowPins, colPins, ROWS, COLS);

void setup(){
  Serial.begin(9600);
}

void loop(){
  char keyPressed = keypad.getKey();
  if(keyPressed){
    Serial.println(keyPressed);
  }
}