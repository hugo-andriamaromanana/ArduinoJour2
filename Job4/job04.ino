#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

int buttonPin = 8;
int buttonState = 0;
int compteur = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    compteur = 0;
  }
  else {
    compteur++;
  }
  lcd.setCursor(0, 0);
  lcd.print("Livio & Hugo");
  lcd.setCursor(0, 1);
  lcd.print(compteur);
  delay(1000);
}
