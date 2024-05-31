
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int lr = 9;
int la = 10;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(lr, OUTPUT);
  pinMode(la, OUTPUT);  
}

void loop() {
  int sv = analogRead(A0);
  float temp = (sv *500.0)/1023/10;
  float volta = (temp*10)/4;
  
  lcd.setCursor(0, 0);
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
  
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: ");
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("C");
}
