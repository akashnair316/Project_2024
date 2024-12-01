// Define LED pin
#define LED_PIN 8  // External LED connected to Pin 8

void setup() {
  // Configure LED pin as OUTPUT
  pinMode(LED_PIN, OUTPUT);

  // Initialize Serial Communication on UART0
  Serial.begin(9600); // 9600 baud rate
}

void loop() {
  // Blink the LED
  digitalWrite(LED_PIN, HIGH);  // Turn LED ON
  delay(5000);                  // Wait 500ms
  digitalWrite(LED_PIN, LOW);   // Turn LED OFF
  delay(3000);                  // Wait 500ms

  // Send "Hello, World!" every 2 seconds
  static unsigned long lastMessageTime = 0; // Track the last message time
  if (millis() - lastMessageTime >= 2000) {
    Serial.println("Hello, World!");  // Print to Serial Monitor
    lastMessageTime = millis();      // Update the message time
  }
}

