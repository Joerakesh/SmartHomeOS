#include <Arduino.h>

#define LED1 2
#define LED2 4
#define LED3 5
#define LED4 18

void setup() {

  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  Serial.println("SmartHomeOS Started");
}

void loop() {

  digitalWrite(LED1, HIGH);
  delay(300);

  digitalWrite(LED1, LOW);

  digitalWrite(LED2, HIGH);
  delay(300);

  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH);
  delay(300);

  digitalWrite(LED3, LOW);

  digitalWrite(LED4, HIGH);
  delay(300);

  digitalWrite(LED4, LOW);
}