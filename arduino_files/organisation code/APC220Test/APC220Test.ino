/*
 Met deze code kun je de APC220 module als transmitter testen. 
 De APC220 sluit je als volgt aan op een uno:
 APC220 > UNO
 gnd > gnd
 VCC > 5V
 en > niet aansluiten
 RXD > D10
 TXD > D9
 AUX > niet aansluiten
 SET > niet aansluiten
 */
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9,10);
int number = 0;

void setup() {

Serial.begin(9600);
  mySerial.begin(9600);

}

void loop() {
(number ++);
Serial.print ("APC220 test   ");
Serial.println (number);
mySerial.print ("APC220 test   ");
mySerial.println (number);
delay (1000);
}
