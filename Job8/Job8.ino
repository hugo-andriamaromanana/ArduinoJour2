#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 
int rectangle = 1; 

void drawRectangle() {
  lcd.setCursor(0,0);
  lcd.print("["); 
  for(int i = 0; i < rectangle; i++) {
    lcd.print("=");
  }
  for(int i = rectangle; i < 10; i++) {
    lcd.print(" "); 
  }
  lcd.print("]");

  lcd.setCursor(0,1); 
  int percent = rectangle * 10;  
  lcd.print(percent); 
  lcd.print("%"); 
  if(rectangle == 10) {
    lcd.clear();
    lcd.setCursor(0,0);  
    lcd.print("Chargement complet");  
}
}

void setup() {
lcd.init(); 
lcd.backlight();  
}

void loop() {
drawRectangle();  
delay(3000);  
rectangle++; 
if(rectangle > 10) {
rectangle = 1; 
}
}