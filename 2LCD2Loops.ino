#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  lcd.begin();
  lcd.backlight();
}
void loop() {
  LCD1(); // สั่งให้ไปทำงานในฟังก์ชั่น LCD1
  LCD2(); // สั่งให้ไปทำงานในฟังก์ชั่น LCD2
}
void LCD1() {
  LiquidCrystal_I2C lcd(0x27, 16, 2); //เลือก Address จอ LCD ที่จะเขียนข้อความ
  lcd.begin();
  lcd.setCursor(0, 0); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรตำแหน่งที่0 แถวที่ 1 เตรียมพิมพ์ข้อความ
  lcd.print("LCD1602 I2c No1"); //พิมพ์ข้อความ "LCD1602 I2c No1"
  lcd.setCursor(2, 1); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรกำแหน่งที3 แถวที่ 2 เตรียมพิมพ์ข้อความ
  lcd.print("myarduino.net"); //พิมพ์ข้อความ "myarduino.net"
}
void LCD2() {
  LiquidCrystal_I2C lcd(0x26, 16, 2); //เลือก Address จอ LCD ที่จะเขียนข้อความ
  lcd.begin();
  lcd.setCursor(0, 0); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรตำแหน่งที่0 แถวที่ 1 เตรียมพิมพ์ข้อความ
  lcd.print("LCD1602 I2c No2"); //พิมพ์ข้อความ "LCD1602 I2c No2"
  lcd.setCursor(2, 1); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรกำแหน่งที3 แถวที่ 2 เตรียมพิมพ์ข้อความ
  lcd.print("myarduino.net"); //พิมพ์ข้อความ "myarduino.net"
}
