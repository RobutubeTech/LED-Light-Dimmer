int potPin = A0; // Analog input pin connected to the potentiometer int potValue = 0; // Value that will be read from the potentiometer int led = 9; // Pin 9 (connected to the LED) is capable of PWM
int LEDPin = 9;
// Runs once at beginning of the program


void setup() {
  pinMode(LEDPin, OUTPUT); // Set pin 9 to output
}


// Loops continuously
void loop() {
  int potValue = analogRead(potPin); // Read potentiometer value
                                 // from A0 pin
  analogWrite(LEDPin, potValue/4);  // Send potentiometer value to LED
                                 // to control brightness with PWM
  delay(10);                     // Wait for 10 ms
  }
 
