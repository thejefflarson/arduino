void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  for(float i = 0; i < 2 * 3.14; i += 0.1) {
    float cycle = sin(i) * 127.5;
    analogWrite(0, (uint8_t)(cycle + 127.5));
    analogWrite(1, (uint8_t)(-1*cycle + 127.5));
    if(cycle < 0) {
      digitalWrite(2, LOW);
    } else {
      digitalWrite(2, HIGH);
    }
    delay(10);
  }
}
