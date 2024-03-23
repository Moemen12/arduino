int pushButton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);

  if (buttonState == 0) {
    Serial.println("Button isn't cliking");
  } else {
    Serial.println("Button is cliking");
  }


  delay(4000);
}
