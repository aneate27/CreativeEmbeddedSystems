#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  // put your setup code here, to run once:
  tft.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  tft.fillScreen(TFT_RED);
  delay(300);
  tft.fillScreen(TFT_ORANGE);
  delay(300);
  tft.fillScreen(TFT_YELLOW);
  delay(300);
  tft.fillScreen(TFT_GREEN);
  delay(300);
  tft.fillScreen(TFT_BLUE);
  delay(300);
  tft.fillScreen(TFT_PURPLE);
  delay(300);
  */
 tft.fillScreen(TFT_NAVY);
  tft.setTextSize(1);
  tft.setTextFont(1);
  tft.setTextColor(TFT_SKYBLUE);
  for (int i = -32; i <= 160; i = i + 4) {
    for (int j = 0; j <= 320; j = j+8) {
      tft.drawString("craft", i, j);
      i++;
    }
    i = i - 8;
  }
  delay(500);
  tft.setTextColor(TFT_WHITE, TFT_NAVY);
  tft.setTextSize(4);
  tft.setTextFont(2);  
  tft.fillCircle(70, 9, 7, TFT_GOLD);
  tft.setRotation(3);
  tft.drawString("UTILITY", 0, 40);
  delay(500);
  tft.setRotation(0);
  tft.fillScreen(TFT_NAVY);
  tft.setTextSize(2);
  tft.setTextFont(1);
  tft.setTextColor(TFT_SKYBLUE);
  for (int i = -32; i <= 160; i = i + 4) {
    for (int j = 0; j <= 320; j = j+8) {
      tft.drawString("craft", i, j);
      i++;
    }
    i = i - 8;
  }
  delay(250);
}
