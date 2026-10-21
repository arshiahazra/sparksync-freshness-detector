/*
  MQUnifiedsensor Library - Calibration for MQ-135
*/

// Include the library
#include <MQUnifiedsensor.h>

/************************ Hardware Configuration ************************/
#define Board "Arduino UNO"
#define Pin A0
#define Type "MQ-135"
#define Voltage_Resolution 5
#define ADC_Bit_Resolution 10

/************************ Clean Air Ratio ************************/
#define RatioMQ135CleanAir 3.6

unsigned long contador = 0;

/************************ Sensor Object ************************/
MQUnifiedsensor MQ135(Board, Voltage_Resolution, ADC_Bit_Resolution, Pin, Type);

void setup() {

  Serial.begin(115200);

  // Use logarithmic regression
  MQ135.setRegressionMethod(1);

  // Load Resistance (RL)
  MQ135.setRL(10);

  // Initialize sensor
  MQ135.init();

  Serial.println("=================================");
  Serial.println("MQ-135 Calibration");
  Serial.println("Make sure the sensor is in CLEAN AIR");
  Serial.println("Reading R0...");
  Serial.println("=================================");
}

void loop() {

  MQ135.update();

  float R0 = MQ135.calibrate(RatioMQ135CleanAir);

  Serial.print(contador);
  Serial.print(" | ");
  Serial.println(R0);

  contador++;
  delay(400);
}
