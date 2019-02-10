#include <Wire.h>
#include <Adafruit_MPL3115A2.h>
#include <Servo.h>
Servo myservo;

int uvPin = A0;
int moisturePin = A1;
int uvValue = 0;
int moistureValue = 0;

int servoIn = 1;
int ledIn = 4;
int servoOut = 9;
int ledOut = 2;

int ledState = LOW;
int ledReading;
int servoState = LOW;
int servoReading;

long time = 0;
long debounce = 100;

Adafruit_MPL3115A2 baro = Adafruit_MPL3115A2();

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  pinMode(servoIn, INPUT);
  pinMode(ledIn, INPUT);
  pinMode(ledOut, OUTPUT);
  
  myservo.attach(servoOut);
}

void loop() {
  servoReading = digitalRead(servoIn);
  delay(150);
  if (servoReading == HIGH) {
    myservo.write(2300);
//    delay(2000);
//    myservo.write(0);
//    delay(2000);
  }
  else {
    myservo.writeMicroseconds(1515);
  }

  ledReading = digitalRead(ledIn);
  delay(150);
  if (ledReading == HIGH) {
    digitalWrite(ledOut, HIGH);
  }
  else {
    digitalWrite(ledOut, HIGH);
  }

  uvValue = analogRead(uvPin); //uv
  moistureValue = analogRead(moisturePin); //moisture
//  Serial.print("uv");
  Serial.println(uvPin);
  delay(2000);
//  Serial.print("moist");
  Serial.println(moisturePin);
//  float pascals = baro.getPressure(); //pressure
//  Serial.print("pascal");
//  Serial.println(pascals);
//  delay(2000);
//  float altm = baro.getAltitude(); //altitude
//  Serial.print("altitude");
//  Serial.println(altm);
//  delay(2000);
//  float tempC = baro.getTemperature(); //temp
//  Serial.print("temp");
//  Serial.println(tempC);
//  delay(2000);
}
