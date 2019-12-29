#include "WiFiServer.h"
#include "WiFiClientSecure.h"
#include <odroid_go.h>

void zeichneBlock(uint16_t x, uint16_t y, uint32_t farbe)
{
  GO.lcd.fillRect(x * 10, y * 10, 8, 8, farbe);
}

void zeichneBaum(uint16_t x, uint16_t y)
{
  zeichneBlock(x+2, y, GREEN);
  zeichneBlock(x+2, y+1, GREEN);
  zeichneBlock(x+1, y+1, GREEN);
  zeichneBlock(x+3, y+1, GREEN);
  zeichneBlock(x, y+2, GREEN);
  zeichneBlock(x+1, y+2, GREEN);
  zeichneBlock(x+2, y+2, GREEN);
  zeichneBlock(x+3, y+2, GREEN);
  zeichneBlock(x+4, y+2, GREEN);
  zeichneBlock(x+2, y+3, MAROON);
  zeichneBlock(x+2, y+4, MAROON);
  zeichneBlock(x+2, y+5, MAROON);
  zeichneBlock(x+2, y+6, MAROON);
}
void zeichneStrich(uint16_t x, uint16_t y, uint32_t farbe)
{
  for (uint16_t i = 0; i < 32; i++)
  {
    zeichneBlock(i, y, farbe);
  }
  
}
void setup()
{
  // put your setup code here, to run once:
  GO.begin();
  GO.lcd.clearDisplay();
  zeichneBaum( 3, 13);
  zeichneStrich(0, 20, GREEN);
  zeichneStrich(0, 21, MAROON);
  zeichneStrich(0, 22, MAROON);
  zeichneStrich(0, 23, DARKGREY);
  zeichneBaum( 11, 13);
  zeichneBaum( 19, 13);
}

void loop()
{
  // put your main code here, to run repeatedly:
}