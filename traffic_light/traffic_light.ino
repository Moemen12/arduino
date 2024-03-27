int myPins[] = {2, 4, 7};
const int numPins = sizeof(myPins) / sizeof(myPins[0]);

void setup() {
  for (int i = 0; i < numPins; i++) {
    pinMode(myPins[i], OUTPUT);
    digitalWrite(myPins[i], LOW);
  }
  delay(3000);
}

void loop() {
  for (int i = 0; i < numPins; i++) {
    digitalWrite(myPins[i], HIGH); // Set pin HIGH
    switch (myPins[i]) {
      case 2:
        delay(5000);
        break;
      case 4:
        delay(2000);
        break;
      case 7:
        delay(5000);
        break;
    }
    digitalWrite(myPins[i], LOW); // Set pin LOW after delay
    delay(1000); // Add a delay between switching pins
  }
}
