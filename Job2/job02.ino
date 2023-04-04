#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

/* display current Voltage with poe*/

void setup() {
  lcd.begin(7, 2);
  lcd.print("Voltage:");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(analogRead(0));
}
