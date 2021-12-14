#include <Wire.h>
#include <LiquidCrystal_I2C.h> //Download Librarynya dulu
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup(){
  lcd.init(); // mulai lcd
  lcd.backlight(); // lampu backlight lcd menyala
  lcd.clear(); // menghapus konten di lcd
}

void loop(){

    lcd.setCursor(0,0);
    lcd.print("KIKI SCHWARZER");
    
    lcd.setCursor(0,1);
    lcd.print("RPI??? JUARA!!!");
    
}
