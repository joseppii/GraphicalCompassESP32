#include <Wire.h>
#define SERIAL_PORT Serial 

void setup() {
  // put your setup code here, to run once:
  // Use ESP32 serial to monitor the process
  Serial.begin(115200);
  while(!SERIAL_PORT){};
  Serial.println();
  Serial.print("Serial Port Setup completed!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello from ESP32!");
}
