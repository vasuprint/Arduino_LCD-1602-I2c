# Arduino_LCD-1602-I2c
# <h2> Exsample LCD_1602_I2C
# ![Arduino_lcd 1602 i2c](https://user-images.githubusercontent.com/90551743/132985940-588ba669-ceda-46eb-a40a-05edfbac8ca0.png)
  ###  This Exsample use Arduino Uno
     - [x] Library Wire.h
     - [x] Library LiquidCrystal_I2C.h
     - [x] Adjest the backlight
  #### How to wire
  Arduino Uno | LCD_1602_I2C
------------ | -------------
5V | VCC
GND | GND
 SDA or [A4] | SDA
SCL or [A5]| SCL
### ![Arduino Uno pinout](https://user-images.githubusercontent.com/90551743/132986863-8c9b03d4-49bb-430b-8e40-b827da154592.png)
  #### \!!!if you try 0x27, 16, 2 is not work you can change to 0x3F \!!!
  > LCD address is ref by 2 type is 0x27 and 0x3f 
  
  > 16 is mean 16 row & 2 is mean column
  


