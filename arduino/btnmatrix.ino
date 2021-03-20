#include <Keypad.h>
#include "Keyboard.h"

const byte ROWS = 3; 
const byte COLS = 3; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', ' '},
  {'T', 'R', 'A'},
  {'7', '8', 'D'},
};

byte rowPins[ROWS] = {7, 8, 9};
byte colPins[COLS] = {14,15,16}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char key = customKeypad.getKey();
  
  if (key != NO_KEY){
    Serial.println(key);
    Keyboard.begin();
    Keyboard.write(key);
    Keyboard.end();
  }
}
