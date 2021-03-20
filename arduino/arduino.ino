///* Pro Micro Test Code
//   by: Nathan Seidle
//   modified by: Jim Lindblom
//   SparkFun Electronics
//   date: September 16, 2013
//   license: Public Domain - please use this code however you'd like.
//   It's provided as a learning tool.
//
//   This code is provided to show how to control the SparkFun
//   ProMicro's TX and RX LEDs within a sketch. It also serves
//   to explain the difference between Serial.print() and
//   Serial1.print().
//*/
//
//
//int latchPin = 5;
//int clockPin = 7;
//int dataPin = 6;
//
//int button = 10;
//
//byte leds = 0;
//
//int lastState = 0;
//int currentState = 0;
//
//void setup()
//{
//  pinMode(latchPin, OUTPUT);
//  pinMode(dataPin, OUTPUT);  
//  pinMode(clockPin, OUTPUT);
//  pinMode(button, INPUT_PULLUP);
//
//  Serial.begin(9600);
//}
//
//void loop()
//{
//// currentState = digitalRead(button);
// if (digitalRead(button)==LOW) {
//  
//  lastState = currentState;
//  bitClear(leds, 6);
//  bitSet(leds, 5);
//  updateShiftRegister();
//  for (int i = 7; i >= 0; i--)
//    {
//        bool b = bitRead(leds, i);
//        Serial.print(b);
//    }
//    Serial.println(" ");
//  delay(1000);
//  bitClear(leds, 5);
//  bitSet(leds, 6);
//  updateShiftRegister();
//
//    for (int i = 7; i >= 0; i--)
//    {
//        bool b = bitRead(leds, i);
//        Serial.print(b);
//    }
//    
//    delay(1000);
//    Serial.println(" ");
// }
//  
//}
//
//void updateShiftRegister()
//{
//   digitalWrite(latchPin, LOW);
//   shiftOut(dataPin, clockPin, LSBFIRST, leds);
//   digitalWrite(latchPin, HIGH);
//}
