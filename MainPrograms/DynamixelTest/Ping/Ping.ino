/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include <DynamixelShield.h>

/*
* Define RX/TX mohon untuk disesuaikan dengan
* Pin yang telah digunakan
*/

#define RX 7
#define TX 8

#if defined(ARDUINO_AVR_UNO) || defined(ARDUINO_AVR_MEGA2560)
  #include <SoftwareSerial.h>
  SoftwareSerial soft_serial(RX, TX); // DYNAMIXELShield UART RX/TX
  #define Serial soft_serial
#elif defined(ARDUINO_SAM_DUE) || defined(ARDUINO_SAM_ZERO)
  #define Serial SerialUSB    
#else
  #define Serial Serial
#endif

uint8_t DXL_ID;
const float DXL_PROTOCOL_VERSION = 1.0;

DynamixelShield dxl;

//This namespace is required to use Control table item names
using namespace ControlTableItem;

void setup() {
  // put your setup code here, to run once:
  
  // For Uno, Nano, Mini, and Mega, use UART port of DYNAMIXEL Shield to debug.
  Serial.begin(115200);
  
  // Set Port baudrate to 57600bps. This has to match with DYNAMIXEL baudrate.
  dxl.begin(57600);

  // Set Port Protocol Version. This has to match with DYNAMIXEL protocol version.
  dxl.setPortProtocolVersion(DXL_PROTOCOL_VERSION);
}

void loop() {

  // put your main code here, to run repeatedly:
  Serial.print("Protocol ID : ");
  Serial.print(DXL_PROTOCOL_VERSION, 1);

  for(int i = 0; i < 19; i++) {
    Serial.print("Pinging Dynamixel ID : ");
    Serial.println(i);
    DXL_ID = i;
    if(dxl.ping(DXL_ID) != true) continue;
    float pos = dxl.getPresentPosition(DXL_ID, UNIT_DEGREE);
    dxl.setGoalPosition(DXL_ID, pos - 5, UNIT_DEGREE);
  }
  delay(500);
}