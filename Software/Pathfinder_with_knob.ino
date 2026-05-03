#include "Keyboard.h"


const int BUT1 = 26;    // P26_A0_D0
const int BUT2 = 27;    // P27_A1_D1
const int BUT3 = 28;    // P28_A2_D2

const int LED1 = 7;     // P1_D7_RX
const int LED2 = 9;     // P4_D9_MISO
const int LED3 = 10;    // P3_D10_MOSI

const int KNOB_A = 4;   // P6_SDA_D4
const int KNOB_B = 5;   // P7_SCL_D5
const int KNOB_SW = 29; // P29_A3_D3

void setup() {
  
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMode(KNOB_SW, INPUT_PULLUP);
  pinMode(KNOB_A, INPUT_PULLUP);
  pinMode(KNOB_B, INPUT_PULLUP);

  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  Keyboard.begin();
}

void loop() {
  
  if (digitalRead(BUT1) == LOW) {
    digitalWrite(LED1, HIGH);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
  } else {
    digitalWrite(LED1, LOW);
  }


}