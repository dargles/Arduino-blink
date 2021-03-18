/**
 * myBlink
 * 
 * This programme is a basic blink programme which I use to check connection to 
 * new devices. It is also a test mule for working out how to develop Arduino 
 * programs on GitHub.
 * @author  David Argles, d.argles@gmx.com
 * @version 2021-03-18@14:30h
 */

// Global declarations go here
#define PIN     LED_BUILTIN                       // Output pin
#define PERIOD  1000                              // Time between changes in mS
#define BANNER  "\nProgram: myBlink, 18-03-2021"  // Splashscreen

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PIN, OUTPUT);
  // Initialise serial output and declare program name
  Serial.begin(115200);
  Serial.println(BANNER);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PIN, digitalRead(PIN)^1);  // flip the LED output
  delay(PERIOD);                          // wait awhile
}
