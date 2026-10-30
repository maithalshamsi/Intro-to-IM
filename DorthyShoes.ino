void setup() {
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {
  int shoeState = digitalRead(A2);

  if (shoeState == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}