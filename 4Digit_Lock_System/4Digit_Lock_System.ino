/*
DESCRIPTION:
  Password system using keypad.
  If entered correct pre-set 4 digit password, green led glows.
  If entered a wrong password, red led glows.
--------------------------------------------------------------------------

SETUP:
  Connect red led to Pin 11 
  Connect green led to Pin 12
  Connect row pins of keypad to pins 2,3,4,5
  Connect row pins of keypad to pins 6,7,8,9

*/
#include <Keypad.h>

char password[] = { '1', '2', '3', '4' }; //Pre-set password
char enteredData[4]; //password entered by user stored here
int index = 0; //to traverse through array
int count = 0; //to check password


const char ROWS = 4;
const char COLS = 4;

char allKeys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' },
};

char rowPins[ROWS] = { 2, 3, 4, 5 };
char colPins[COLS] = { 6, 7, 8, 9 };

Keypad keypad = Keypad(makeKeymap(allKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char keyPressed = keypad.getKey();
  if (keyPressed) {
    enteredData[index] = keyPressed;
    index++;
    Serial.println(keyPressed);

    if (index == 4) {
      Serial.print("You entered ");
      Serial.print(enteredData);
      Serial.println();
      index = 0;
      for (int i = 0; i < 4; i++) {
        if (password[i] == enteredData[i]) {
          count++;
        }
      }
      if (count == 4) {
        Serial.println("Welcome...\n");
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
      } else {
        Serial.println("Wrong Password...Try Again\n");
        digitalWrite(11, HIGH);
        digitalWrite(12, LOW);
      }
    }
  }
  count = 0;
}