/*Créer votre chronomètre. Pour lancer le chronomètre, l’utilisateur doit presser un
bouton. Le temps écoulé est affiché sur l’afficheur LCD.*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

/*stopwatch*/

int buttonPin = 8;
int buttonState = 0;
int compteur = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
}

