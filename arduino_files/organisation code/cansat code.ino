#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <SoftwareSerial.h>

#define BMP_SCK 13
#define BMP_MISO 12
#define BMP_MOSI 9 
#define BMP_CS 8

Adafruit_BMP280 bmp(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK);

SoftwareSerial mySerial(9,10);
int number = 0;

void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP280 test")); // mag dit weg??
  
  if (!bmp.begin()) {  
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring!"));
    while (1);
  }
}

void loop() {

    Serial.print(F("*C Pa m             "));
    Serial.print(bmp.readTemperature());
    Serial.print(bmp.readPressure());
    Serial.print(bmp.readAltitude(1013.25); // this should be adjusted to your local forcase; den haag average 1015
    Serial.println();
  
    delay(2000);
}
