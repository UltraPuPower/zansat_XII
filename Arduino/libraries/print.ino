void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  float sensorInfra1; 
  sensorInfra1 = 1;

  float sensorInfra2; 
  sensorInfra2 = 1;

  float sensorInfra3; 
  sensorInfra3 = 1;

  float sensorInfra4; 
  sensorInfra4 = 1;

  float sensorInfra5; 
  sensorInfra5 = 1;

  float sensorInfra6; 
  sensorInfra6 = 1;

  float sensorInfra7; 
  sensorInfra7 = 1;

  float sensorInfra8; 
  sensorInfra8 = 1;

  float sensorInfra9; 
  sensorInfra9 = 1;

  float sensorUltra1; 
  sensorUltra1 = 1;

  float sensorUltra2; 
  sensorUltra2 = 1;

  float sensorUltra3; 
  sensorUltra3 = 1;

  float sensorUltra4; 
  sensorUltra4 = 1;

  float sensorGas1; 
  sensorGas1 = 1;

  float sensorBMP1; 
  sensorBMP1 = 1;
  
  Serial.print("Znstsnsrdt-infA:" + String(sensorInfra1) + ",infB:" + String(sensorInfra2) + ",infC:" + String(sensorInfra3) + ",infD:" + String(sensorInfra4) + ",infE:" + String(sensorInfra5) + ",infF:" + String(sensorInfra6) + ",infG:" + String(sensorInfra7) + ",infH:" + String(sensorInfra8) + ",infI:" + String(sensorInfra9) + ",ultA:" + String(sensorUltra1) + ",ultB:" + String(sensorUltra2) + ",ultC:" + String(sensorUltra3) + ",ultD:" + String(sensorUltra4) + ",gasA:" + String(sensorGas1) + ",bmpA:" + String(sensorBMP1) + "-end");
  delay(1000);
}