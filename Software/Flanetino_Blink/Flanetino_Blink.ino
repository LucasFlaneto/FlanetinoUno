
void setup() {

  for (int i = 1; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

}


void loop() {
  for (int i = 1; i <= 13; i++) {
    if (i == 1 ) {
      digitalWrite(13, LOW);
    }
    digitalWrite(i, HIGH);
    digitalWrite(i - 1, LOW);
    delay(50);
  }

}
