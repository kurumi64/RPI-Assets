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
    lcd.print("KIKI ADI PAMUNGKAS");
    
    lcd.setCursor(0,1);
    lcd.print("D4 RPL 1B");
    
    lcd.setCursor(0,2);
    lcd.print("RPI? JUARA!");
    
    lcd.setCursor(0,3);
    lcd.print("SENTOLOP :v");
    
}
