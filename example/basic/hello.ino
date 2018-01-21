#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_RST 16
#define TFT_CS 5
#define TFT_DC 4

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

const uint16_t grey = 0x5AEB;

const uint16_t white = 0xFFFF;

void setup(void)
{
  Serial.begin(115200);

  tft.initR(INITR_BLACKTAB);

  tft.setTextWrap(false);
  tft.fillScreen(white);
  tft.setTextColor(grey);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.println("- HELLO -");
  tft.setCursor(10,30);
  tft.setTextSize(1);
  tft.println("-- How are you --");
}

void loop(void)
{


}
