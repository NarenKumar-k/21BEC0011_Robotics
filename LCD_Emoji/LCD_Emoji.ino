#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);

uint8_t heart[] = {0x00, 0x00, 0x0a, 0x15, 0x11, 0x0a, 0x04, 0x00};
uint8_t smile[] = {0x00, 0x00, 0x0a, 0x00, 0x1f, 0x11, 0x0e, 0x00};
uint8_t bell[] = {0x04, 0x0e, 0x0a, 0x0a, 0x0a, 0x1f, 0x00, 0x04};
void setup()
{
  
  MyLCD.begin(16, 2);
  
  MyLCD.createChar(0, heart);
  MyLCD.createChar(1, smile);
  MyLCD.createChar(2, bell);
  
  MyLCD.clear();
  MyLCD.print("Custom Characters:");
  
  MyLCD.setCursor(3, 1);
  MyLCD.write(byte(0));
  MyLCD.setCursor(7, 1);
  MyLCD.write(byte(1));
  MyLCD.setCursor(12, 1);
  MyLCD.write(byte(2));

}
void loop()
{
