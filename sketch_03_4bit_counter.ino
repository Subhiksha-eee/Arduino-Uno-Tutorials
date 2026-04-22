// 4-bit Binary Counter using 4 LEDs
// Counts from 0 (0000) to 15 (1111)
// tinker cad link-https:https://www.tinkercad.com/things/66O7evcUVKE-4bitcounter

int pin2 = 2;  // Bit 3 (MSB)
int pin3 = 3;  // Bit 2
int pin4 = 4;  // Bit 1
int pin5 = 5;  // Bit 0 (LSB)
int timer = 1000;

void setup()
{
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop()
{
  // 0 [0000]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, LOW);  digitalWrite(pin4, LOW);  digitalWrite(pin5, LOW);
  delay(timer);

  // 1 [0001]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, LOW);  digitalWrite(pin4, LOW);  digitalWrite(pin5, HIGH);
  delay(timer);

  // 2 [0010]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, LOW);  digitalWrite(pin4, HIGH); digitalWrite(pin5, LOW);
  delay(timer);

  // 3 [0011]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, LOW);  digitalWrite(pin4, HIGH); digitalWrite(pin5, HIGH);
  delay(timer);

  // 4 [0100]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, HIGH); digitalWrite(pin4, LOW);  digitalWrite(pin5, LOW);
  delay(timer);

  // 5 [0101]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, HIGH); digitalWrite(pin4, LOW);  digitalWrite(pin5, HIGH);
  delay(timer);

  // 6 [0110]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, HIGH); digitalWrite(pin4, HIGH); digitalWrite(pin5, LOW);
  delay(timer);

  // 7 [0111]
  digitalWrite(pin2, LOW);  digitalWrite(pin3, HIGH); digitalWrite(pin4, HIGH); digitalWrite(pin5, HIGH);
  delay(timer);

  // 8 [1000]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, LOW);  digitalWrite(pin4, LOW);  digitalWrite(pin5, LOW);
  delay(timer);

  // 9 [1001]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, LOW);  digitalWrite(pin4, LOW);  digitalWrite(pin5, HIGH);
  delay(timer);

  // 10 [1010]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, LOW);  digitalWrite(pin4, HIGH); digitalWrite(pin5, LOW);
  delay(timer);

  // 11 [1011]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, LOW);  digitalWrite(pin4, HIGH); digitalWrite(pin5, HIGH);
  delay(timer);

  // 12 [1100]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin4, LOW);  digitalWrite(pin5, LOW);
  delay(timer);

  // 13 [1101]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin4, LOW);  digitalWrite(pin5, HIGH);
  delay(timer);

  // 14 [1110]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin4, HIGH); digitalWrite(pin5, LOW);
  delay(timer);

  // 15 [1111]
  digitalWrite(pin2, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin4, HIGH); digitalWrite(pin5, HIGH);
  delay(timer);
}
