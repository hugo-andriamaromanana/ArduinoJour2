#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  lcd.begin(7, 2);
  lcd.print("Hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}

