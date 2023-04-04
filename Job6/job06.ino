/*Écrire un programme qui affiche l’heure sur l’afficheur LCD au format HH:MM:SS.*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Livio & Hugo");
  lcd.setCursor(0, 1);
  lcd.print(hour());
  lcd.print(":");
  lcd.print(minute());
  lcd.print(":");
  lcd.print(second());
  delay(1000);
}


