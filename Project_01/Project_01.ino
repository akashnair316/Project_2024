// Define the GPIO pin for the LED
#define LED_PIN 8
#define LED_PIN0 7
 
void setup() {
  // Configure the LED_PIN as an OUTPUT
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(LED_PIN, HIGH);
  delay(100); // Wait for 1 second

  digitalWrite(LED_PIN0, HIGH);
  delay(100); // Wait for 1 second


  // Turn the LED OFF
  digitalWrite(LED_PIN, LOW);
  delay(100); // Wait for 1 second
  digitalWrite(LED_PIN0, LOW);
  delay(100); // Wait for 1 second

}

