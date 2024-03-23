const int ledPin = 2;  // Define the pin connected to the LED

void secondNum(int offTime, int onTime, int isOn) {
  if (isOn == 1) {
    digitalWrite(ledPin, HIGH);  
    delay(onTime);               
    digitalWrite(ledPin, LOW); 
    delay(offTime);              
  } else {
    digitalWrite(ledPin, LOW);  
    delay(offTime);               
    digitalWrite(ledPin, HIGH); 
    delay(onTime);               
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  secondNum(5000, 5000, 0);  
}
