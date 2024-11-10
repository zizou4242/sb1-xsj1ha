/*
  ESP32 DevKitC V4 Arduino Code
  For actual hardware deployment
*/

// Built-in LED pin
const int LED_PIN = 2;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  
  // Configure LED pin as output
  pinMode(LED_PIN, OUTPUT);
  
  // Wait for serial port to connect
  while (!Serial) {
    delay(10);
  }
  
  Serial.println("ESP32 DevKitC V4 is ready!");
}

void loop() {
  // Blink LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  
  // Read internal temperature sensor (simulated)
  float temperature = temperatureRead();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
  
  delay(2000);
}

// Simulated temperature reading
float temperatureRead() {
  return 20.0 + (float)random(0, 50) / 10.0;
}