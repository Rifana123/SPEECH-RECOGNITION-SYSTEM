#define devicePin 8  // Digital pin connected to the LED

void setup() {
  pinMode(devicePin, OUTPUT);       // Set pin 8 as output
  digitalWrite(devicePin, LOW);     // Start with device OFF
  Serial.begin(9600);               // Start Serial communication
  Serial.println("Enter command: ON or OFF");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n'); // Read input until Enter
    command.trim(); // Remove leading/trailing whitespace

    if (command == "ON") {
      digitalWrite(devicePin, HIGH);   // Turn device ON
      Serial.println("Device turned ON");
    } 
    else if (command == "OFF") {
      digitalWrite(devicePin, LOW);    // Turn device OFF
      Serial.println("Device turned OFF");
    } 
    else {
      Serial.println("Invalid command. Use ON or OFF.");
    }
  }
}
