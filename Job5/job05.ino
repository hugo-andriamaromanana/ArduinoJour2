/*Changer la couleur d’une LED RGB avec un potentiomètre.*/

// Déclaration des variables
int redPin = 9; // broche rouge
int greenPin = 10; // broche verte
int bluePin = 11; // broche bleue
int potPin = A0; // broche du potentiomètre
int potVal; // valeur du potentiomètre
int redVal; // valeur de la couleur rouge
int greenVal; // valeur de la couleur verte
int blueVal; // valeur de la couleur bleue

void setup() {
  // Définition des broches en sortie
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Lecture de la valeur du potentiomètre
  potVal = analogRead(potPin);
  // Calcul de la valeur de la couleur rouge
  redVal = map(potVal, 0, 1023, 0, 255);
  // Calcul de la valeur de la couleur verte
  greenVal = map(potVal, 0, 1023, 255, 0);
  // Calcul de la valeur de la couleur bleue
  blueVal = map(potVal, 0, 1023, 0, 255);
  // Affichage de la couleur rouge
  analogWrite(redPin, redVal);
  // Affichage de la couleur verte
  analogWrite(greenPin, greenVal);
  // Affichage de la couleur bleue
  analogWrite(bluePin, blueVal);
  // Affichage de la valeur du potentiomètre
  Serial.println(potVal);
  // Délai de 10 ms
  delay(10);
}