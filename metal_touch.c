/*
    Project name : Metal Touch Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-metal-touch-sensor-module
*/

int digitalPin = 6;   // KY-036 digital interface
int analogPin = A1;   // KY-036 analog interface
int ledPin = 12;      // Arduino LED pin
int digitalVal;       // digital readings
int analogVal;        // analog readings

void setup() 
{
  pinMode(digitalPin, INPUT); 
  pinMode(analogPin, INPUT);
  pinMode(ledPin, OUTPUT);      
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  
  if(digitalVal == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn ON Arduino's LED
    Serial.println("Digital Value: HIGH");
  } else {
    digitalWrite(ledPin, LOW);  // Turn OFF Arduino's LED
    Serial.println("Digital Value: LOW");
  }

  // Read analog interface
  analogVal = analogRead(analogPin);
  Serial.print("Analog Value: ");
  Serial.println(analogVal);  // Print analog value to serial

  delay(100);
}
