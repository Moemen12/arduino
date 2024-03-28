int ledPin = 3;
int readPin = A5;

int readValue;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  // Read the analog value from the pin
  readValue = analogRead(readPin);
  
  // Map the analog value to the range of 0-255
  int brightness = map(readValue, 0, 1023, 0, 255);
  
  // Print the mapped value to Serial monitor
  Serial.println(brightness);
  
  // Set the brightness of the LED using analogWrite
  analogWrite(ledPin, brightness);
  
  // Add a short delay to stabilize readings
  delay(10);
}
