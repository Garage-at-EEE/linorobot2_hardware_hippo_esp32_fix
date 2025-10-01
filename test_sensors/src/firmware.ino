#include <Arduino.h>
#include <Wire.h>

// MPU6050 I2C address
const int MPU6050_ADDR = 0x68;

void setup() {
  // Start the I2C communication
  Wire.begin();
  
  // Initialize serial communication for debugging
  Serial.begin(115200);

  // Give the IMU some time to power up
  delay(1000);
  
  // Check MPU6050 connection
  Wire.beginTransmission(MPU6050_ADDR);
  byte error = Wire.endTransmission();
  
  if (error == 0) {
    Serial.println("MPU6050 Connected!");
  } else {
    Serial.println("MPU6050 Not Connected!");
  }
}

void loop() {
  // Main loop does nothing in this example
}
