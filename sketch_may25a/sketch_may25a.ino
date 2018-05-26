/*
 T05_Temperatura
 */

const int sensor = 0;
const int ledRojo = 5;
const int ledAzul = 6;

long miliVolts;
long temperatura;
int brillo;

void setup() {
  Serial.begin(9600); //iniciamos la comunicacion serial
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);

}

void loop() {
  miliVolts = (analogRead(sensor) * 5000L) / 1023; //calculando los mv en la entrada
  temperatura = miliVolts / 10; //calculamos la temperatura

  brillo = map(temperatura, 10, 40, 0, 255); //ajustamos la escala de temperatura para usar analowrite
  brillo = constrain(brillo, 0, 255);

  analogWrite(ledRojo, brillo);
  analogWrite(ledAzul, 255 - brillo); //ajustamos el color del led
  

  

  Serial.print("Temperatura: "); //mandamos la temperatura
  Serial.print(temperatura);
  Serial.println(" grados");
  delay(500);
 

}



