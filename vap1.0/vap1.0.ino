#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET 4
#define PAUSE 1000
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int var;
int var_puffs;
int button_fire;
int ampere = 10;

#define sensorTensaoDC  A0
float valorTensaoDC;  // variavel para receber o valor lido do sensor
int amostragem = 1000; // varivel para der uma media de calculos
float mediaTotalTensaoDC = 0; // variavel para soma das medias
float Valor_Tensao = 0; //variavel para recerber o valor final de Volts
float voltsporUnidade = 0.004887586;
float R1 = 29600.0; // Medir o resitor com o multimetro na escala 200k de omegas do lado negativo
float R2 = 7200.0;

void setup() {
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);//I2C
   display.fillScreen(BLACK);
   display.clearDisplay();

}

void loop() {  
  display.setTextColor(WHITE);
  display.setTextSize(1);

  mediaTotalTensaoDC = 0; //zera o valor medio para não dar erro de calculo
    for (int i = 0; i < amostragem ; i++) {// repete por 1000 vezes para der uma precisão melhor
        valorTensaoDC = analogRead(sensorTensaoDC);
        valorTensaoDC = (valorTensaoDC * voltsporUnidade); //calcula o valor com base na resolução do ADC
        mediaTotalTensaoDC = mediaTotalTensaoDC + (valorTensaoDC / (R2 / (R1 + R2))); //faz o calculo matematico
        Valor_Tensao = mediaTotalTensaoDC / amostragem;//Media final
    }

  int var = (Valor_Tensao * ampere);

  if(button_fire = 1){
    var_puffs = var_puffs + 1;
    delay(5000);
    
  }
    
  display.setCursor(52,0);
  display.print("Fire");

  display.setTextSize(2);
  display.setCursor(46.5,10);
  display.print(var);
  display.print("W");

  display.setTextSize(1);
  display.setCursor(0,17);
  display.print("puffs");
  var_puffs = 0;
  display.setCursor(3,25);
  display.print(var_puffs);//var_puffs
  
  display.setCursor(104,17);
  display.print("volt");
  display.setCursor(104,25);
  display.print(Valor_Tensao);
  display.display();

  delay(100);
  display.clearDisplay();

}

//7 linhas -> texto
//0 - (12,25); 10 - (9,25); 100 - (6,25); 1000 - (3,25);
//Link shapes -> https://randomnerdtutorials.com/guide-for-oled-display-with-arduino/

//no battery < 2.5v
//charger < 3.5v
//fire >= 3.5v
//completo >= 4.0v
