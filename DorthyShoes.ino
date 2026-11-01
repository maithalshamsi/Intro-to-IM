void setup() {
  pinMode(13, OUTPUT);  //  pin 13 is output to control the LED
  pinMode(A2, INPUT);  //  A2 is input to read the shoe switch
}

void loop() {
  int shoeState = digitalRead(A2);  // this checks if the heels are touching and save the result

  // If the heels are touching
  if (shoeState == HIGH) {     // turn LED on
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);     // if heels are not touching turn  LED off
  }
}
