#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin(D6, D7);  //SDA-D6,SCL-D7
  lcd.init();
  lcd.backlight();
 
}

void loop() {
lcd.print("KARTHI");
  lcd.scrollDisplayLeft(); /* Scroll the display to the left */
  delay(500);  /* delay according to scrolling speed you want*/
}
