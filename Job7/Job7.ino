#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 7;

unsigned long startTime;
unsigned long elapsedTime = 0;
bool isRunning = false;

void setup() {
  lcd.begin(16, 2);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW && !isRunning) {
    startTime = millis();
    isRunning = true;
  }

  if (isRunning) {

    elapsedTime = millis() - startTime;

    lcd.setCursor(0, 0);
    lcd.print("Temps ecoule: ");
    lcd.setCursor(0, 1);
    lcd.print(elapsedTime / 1000);
    lcd.print(" secondes");
  }
}
s