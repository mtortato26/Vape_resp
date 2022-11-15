#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET 4
#define PAUSE 1000
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int varT = 100;

void setup() {
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);//I2C
   display.fillScreen(BLACK);
   display.clearDisplay();

}

void loop() {
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);//(x1,y1,x2,y2,x3,y3)
  display.drawTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.drawTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.drawTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.drawTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.drawTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.drawTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.drawTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.drawTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.drawTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.drawTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.drawTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.drawTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.fillTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.drawTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.drawTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.fillTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.fillTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.drawTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.fillTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.fillTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.fillTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.drawTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.fillTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.fillTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.fillTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.fillTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.fillTriangle(5, 16, 20, 11, 20, 21, WHITE);
  display.fillTriangle(25, 16, 40, 11, 40, 21, WHITE);
  display.fillTriangle(45, 16, 60, 11, 60, 21, WHITE);
  display.fillTriangle(65, 16, 80, 11, 80, 21, WHITE);
  display.fillTriangle(85, 16, 100, 11, 100, 21, WHITE);
  display.fillTriangle(105, 16, 120, 11, 120, 21, WHITE);
  display.display();
  delay(varT);
  display.clearDisplay();

}
