# KY-036 Metal Touch Sensor with LED Indicator

#### Project Overview

This project uses the KY-036 metal touch sensor to detect touch inputs and provide corresponding digital and analog readings. An LED connected to the Arduino indicates the presence of a touch based on the sensor's digital output.

#### Components Needed

1. **Arduino Board**
2. **KY-036 Metal Touch Sensor**
3. **LED**
4. **Resistor (for the LED)**
5. **Jumper Wires**
6. **Breadboard**


### Block diagram


#### Pin Connections

1. **KY-036 Sensor:**
   - **VCC**: Connect to Arduino 5V
   - **GND**: Connect to Arduino GND
   - **Digital Output**: Connect to Arduino digital pin 6
   - **Analog Output**: Connect to Arduino analog pin A1

2. **LED:**
   - **Anode (+)**: Connect to Arduino digital pin 12 through a current-limiting resistor (e.g., 220Ω)
   - **Cathode (-)**: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the KY-036 sensor's digital pin to digital pin 6 on the Arduino.
   - Connect the sensor's analog pin to analog pin A1 on the Arduino.
   - Connect an LED to digital pin 12 on the Arduino, with a resistor in series to limit current.
   - Ensure all components are properly grounded and connected to the 5V power supply.

2. **Initialize the System:**
   - Configure the sensor's digital and analog pins as inputs.
   - Configure the LED pin as an output.
   - Start serial communication at a baud rate of 9600 to monitor sensor readings.

3. **Read Sensor Values:**
   - In the loop function, read the digital value from the sensor.
   - Turn on the LED if the digital value is HIGH, indicating a touch is detected.
   - Print the digital value to the Serial Monitor for real-time feedback.

4. **Monitor Analog Values:**
   - Read the analog value from the sensor to get a more granular measure of touch intensity.
   - Print the analog value to the Serial Monitor.

5. **Output Results:**
   - Continuously update the Serial Monitor with the digital and analog readings.
   - Adjust the delay in the loop function to control the frequency of updates.

#### Applications

- **Touch Detection:** Use the setup to detect touch inputs for various interactive projects.
- **Security Systems:** Integrate the touch sensor in security systems to trigger alerts upon touch.
- **Educational Projects:** Demonstrate the use of digital and analog sensors in a simple, hands-on project.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner