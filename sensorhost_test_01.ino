/*
 NodeMCU ESP8266 Blink test by Sensorhost
 Blink the red LED on the NodeMCU 0.9 (ESP12) module
 This example code is in the public domain
 
 The red LED on the NodeMCU module is connected to GPIO16 (D0 in Arduino speak) 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
 There is a possibility the LED is a different color!
 Also note that there is normally a blue LED on the ESP8266 module which is part
  of (soldered to) the NodeMCU board. This LED is not used in this example.
*/

void setup() {
  Serial.begin(115200);             // Enable the serial port at desired baud rate
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is acive low on the NodeMCU)
  Serial.println("Led is ON");      // Show a massage on the serial port.
  delay(250);                       // Wait for a 250 milliseconds
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  Serial.println("Led is OFF");     // Show a massage on the serial port.
  delay(1750);                      // Wait for 1750 milliseconds
}

