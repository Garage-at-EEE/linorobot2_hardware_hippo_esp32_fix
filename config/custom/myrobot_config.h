// Copyright (c) 2021 Juan Miguel Jimeno
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MYROBOT_CONFIG_H
#define MYROBOT_CONFIG_H

#define LED_PIN 2
#define ESP32
#define SOC_PCNT_SUPPORTED
#define BAUDRATE 115200
#define LINO_BASE MECANUM

#define USE_GENERIC_2_IN_MOTOR_DRIVER 
//#define USE_MPU9250_IMU
// #define USE_MPU6050_IMU
#define SDA_PIN 26 // specify I2C pins for esp32
#define SCL_PIN 25

// #define USE_LIDAR_UDP
// #define LIDAR_RXD 17 // you may use any available input pin
// // #define LIDAR_PWM 15  // do not use, the PWM control loop is not implememted yet
// #define LIDAR_SERIAL 1 // uart number, 1 or 2
// #define LIDAR_BAUDRATE 230400 // the Lidar serial buadrate
// #define LIDAR_SERVER { 192, 168, 1, 145 }  // eg your desktop IP addres
// #define LIDAR_PORT 8889 // the UDP port on server


#define K_P 0.6                             
#define K_I 0.8                             
#define K_D 0.5                             

//For Moretea
#define MOTOR_MAX_RPM 130       
#define MAX_RPM_RATIO 1.0
#define MOTOR_OPERATING_VOLTAGE 6
#define MOTOR_POWER_MAX_VOLTAGE 6
#define MOTOR_POWER_MEASURED_VOLTAGE 6      
#define COUNTS_PER_REV1 478 //960
#define COUNTS_PER_REV2 478 //960
#define COUNTS_PER_REV3 478
#define COUNTS_PER_REV4 478
#define WHEEL_DIAMETER 0.06               
#define LR_WHEELS_DISTANCE 0.34 //0.213       
#define PWM_BITS 8                         
#define PWM_FREQUENCY 8000


// Fixed pin numbers for ESP32-WROOM-32D 38 PIN VERSION
/// ENCODER PINS
#define MOTOR1_ENCODER_A 39
#define MOTOR1_ENCODER_B 36 
#define MOTOR1_ENCODER_INV false 

#define MOTOR2_ENCODER_A 27
#define MOTOR2_ENCODER_B 14 
#define MOTOR2_ENCODER_INV true

#define MOTOR3_ENCODER_A 21
#define MOTOR3_ENCODER_B 5 
#define MOTOR3_ENCODER_INV false

#define MOTOR4_ENCODER_A 35
#define MOTOR4_ENCODER_B 34
#define MOTOR4_ENCODER_INV true 

// Motor Pins
#define MOTOR1_PWM 17
#define MOTOR1_IN_A 19
#define MOTOR1_IN_B 18 
#define MOTOR1_INV false

#define MOTOR2_PWM 4
#define MOTOR2_IN_A 22
#define MOTOR2_IN_B 23 
#define MOTOR2_INV false

#define MOTOR3_PWM 33
#define MOTOR3_IN_A 12
#define MOTOR3_IN_B 13
#define MOTOR3_INV false

#define MOTOR4_PWM 2
#define MOTOR4_IN_A 15
#define MOTOR4_IN_B 32
#define MOTOR4_INV true

#define PWM_MAX pow(2, PWM_BITS) - 1
#define PWM_MIN -(pow(2, PWM_BITS) - 1)
//#define USE_WIFI_TRANSPORT
// #define AGENT_IP { 192, 168, 1, 100 }  // eg IP of the desktop computer
// #define AGENT_PORT 8888
// Enable WiFi with null terminated list of multiple APs SSID and password
// #define WIFI_AP_LIST {{"garage@eee", "garage@eee"}, {NULL}}
// #define WIFI_MONITOR 2 // min. period to send wifi signal strength to syslog
// #define USE_ARDUINO_OTA
// #define USE_SYSLOG
// #define SYSLOG_SERVER { 192, 168, 1, 100 }  // eg IP of the desktop computer
// #define SYSLOG_PORT 514
// #define DEVICE_HOSTNAME "linorobot2"
// #define APP_NAME "hardware"
#endif
