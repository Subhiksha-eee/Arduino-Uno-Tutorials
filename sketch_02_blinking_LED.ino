// LED Blink - Pin 12
// Wokwi Simulation: https://wokwi.com/projects/460911048133637121

void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);  // LED ON
  delay(1000);
  digitalWrite(12, LOW);   // LED OFF
  delay(1000);
}
