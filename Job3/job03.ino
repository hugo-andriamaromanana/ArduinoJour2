#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

byte smiley[] = {
  B00000,
  B10001,
  B00110,
  B01000,
  B10001,
  B01110,
  B00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, smiley);
  lcd.setCursor(5, 0);
  lcd.write(byte(0));
}

void loop() {
  // Le programme peut continuer ici
}