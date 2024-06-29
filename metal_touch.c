/*
    Project name : Arduino Uno Metal Touch Sensor Module
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-metal-touch-sensor-module
*/

// Pin connected to the metal touch sensor module's output
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read sensor state

  if (sensorValue == HIGH) {
    Serial.println("Metal touch detected");
  } else {
    Serial.println("No metal touch detected");
  }

  delay(500);  // Delay for readability
}
