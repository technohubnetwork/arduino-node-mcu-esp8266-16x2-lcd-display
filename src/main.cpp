#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin(D2, D1); //(SDA, SCL)
  lcd.init();
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print("Techno Hub");
  lcd.setCursor(5, 1);
  lcd.print("Network");
}
void loop() {
  // No Action!
}
