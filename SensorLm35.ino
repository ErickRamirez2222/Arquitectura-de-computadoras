void setup() {
  Serial.begin(9600);
}

void loop() {
  int Value = analogRead(A1);
  float volts = (Value * 5) / 1023.0;
  float temperaturaC = volts * 100;

  Serial.print("Temperatura: ");
  Serial.print(temperaturaC);
  Serial.println(" C");
delay(1000);
}