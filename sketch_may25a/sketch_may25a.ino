/*
 T05_Temperatura
 */

const int sensor = 0;
const int ledRojo = 5;
const int ledAzul = 6;

long miliVolts;
long temperatura;

void setup() {
  Serial.begin(9600);

}

void loop() {
  miliVolts = (analogRead(sensor) * 5000L) / 1023;
  temperatura = miliVolts / 10;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" grados");
  delay(1000);
 

}



