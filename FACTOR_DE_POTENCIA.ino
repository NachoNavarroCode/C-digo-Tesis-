int sensorV = A0;
int sensorA = A1;
int sensorValueV = 0;
float valorealV = 0.0;
int sensorValueA = 0;
float valorealA = 0.0;

void setup() {
  Serial.begin(19200);
}

void loop() {
  
  // Voltage reading
  sensorValueV = analogRead(sensorV);
  valorealV = ((sensorValueV / 1023.0) * 5000.0) -230;

  // Current reading
  sensorValueA = analogRead(sensorA);
  valorealA = ((sensorValueA / 1023.0) * 1000.0) -670;
  
  // Phase angle calculation (radians)
  float desfR = atan2(valorealV, valorealA);

  //Radians to Degrees convertion
  float desfG = degrees(desfR);

  // Power Factor calculation
  float powerFactor = abs(cos(desfR));

  
  Serial.print(valorealV);
  Serial.print(",");
  Serial.print(valorealA);
  Serial.print(",");
  Serial.print(powerFactor, 3);
  Serial.print(",");
  Serial.println(desfG, 2);
  
  delay(30);
}
