/*
Connect row pins of Keypad to analog A5,A4,A3,A2 and column pins to digital 10,11,12,13
Connect 8 pins of 7 segment to digital 2,3,4,5,6,7,8,9 (A-H = 2-7)
Connect one of the common anode pin to Vin or 5v or 3.3v
*/

#include<Keypad.h>

const char ROWS = 4;
const char COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

char rowPins[ROWS] =  {A5, A4, A3, A2};
char colPins[COLS] =  {10, 11, 12, 13};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  Serial.begin(9600);

  pinMode(2, OUTPUT);//a
  pinMode(3, OUTPUT);//b
  pinMode(4, OUTPUT);//c
  pinMode(5, OUTPUT);//d
  pinMode(6, OUTPUT);//e
  pinMode(7, OUTPUT);//f
  pinMode(8, OUTPUT);//g
  pinMode(2, OUTPUT);//h
}

void loop(){

  char keyPressed = keypad.getKey();
  if(keyPressed == '0'){
    Serial.println(keyPressed);
    zero();
  }
  else if(keyPressed == '1'){
    Serial.println(keyPressed);
    one();
  }
  else if(keyPressed == '2'){
    Serial.println(keyPressed);
    two();
  }
  else if(keyPressed == '3'){
    Serial.println(keyPressed);
    three();
  }
  else if(keyPressed == '4'){
    Serial.println(keyPressed);
    four();
  }
  else if(keyPressed == '5'){
    Serial.println(keyPressed);
    five();
  }
  else if(keyPressed == '6'){
    Serial.println(keyPressed);
    six();
  }
  else if(keyPressed == '7'){
    Serial.println(keyPressed);
    seven();
  }
  else if(keyPressed == '8'){
    Serial.println(keyPressed);
    eight();
  }
  else if(keyPressed == '9'){
    Serial.println(keyPressed);
    nine();
  }
  else if(keyPressed == '0'){
    Serial.println(keyPressed);
    zero();
  }
  else if(keyPressed == 'A'){
    Serial.println(keyPressed);
    A();
  }
  else if(keyPressed == 'B'){
    Serial.println(keyPressed);
    B();
  }
  else if(keyPressed == 'C'){
    Serial.println(keyPressed);
    C();
  }
  else if(keyPressed == 'D'){
    Serial.println(keyPressed);
    D();
  }
  else if(keyPressed == '#'){
    Serial.println(keyPressed);
    hash();
  }
  
}

void zero(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void one(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void two(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void three(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void four(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void five(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void six(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void seven(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void eight(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void nine(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  //delay(1000);
}


void A(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void B(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void C(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //delay(1000);
}


void D(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  //delay(1000);
}
void hash(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}