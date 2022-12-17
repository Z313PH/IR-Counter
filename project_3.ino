#include <ESP32Servo.h>
#include <analogWrite.h>
#include <ESP32Tone.h>
#include <ESP32PWM.h>

#define SERVO_PIN 4  // ESP32 pin GIOP26 connected to servo motor
Servo servoMotor;
//cosntants for the pins where sensors are plugged into.
const int sensorPin = 2;
const int ledPin = 5;
//Set up some global variables for the light level an initial value.
int lightInit;  // initial value
int lightVal;   // light reading
int counter;
void setup()
{
  Serial.begin(9600);
  // We'll set up the LED pin to be an output.
  pinMode(ledPin, OUTPUT);
  lightInit = analogRead(sensorPin);
  //we will take a single reading from the light sensor and store it in the lightCal        //variable. This will give us a prelinary value to compare against in the loop
  Serial.println("Test 1");
  counter = 0;
  servoMotor.attach(SERVO_PIN);  // attaches the servo on ESP32 pin
}
void loop()
{
  lightVal = analogRead(sensorPin); // read the current light levels
  Serial.println(lightVal - lightInit);
  delay(2000);
  //if lightVal is less than our initial reading withing a threshold then it is dark.
  if (lightVal - lightInit <  -100)
  {
    digitalWrite(ledPin, HIGH); // turn on light
    counter++;
    Serial.print("Counter:");
    Serial.println(counter);
  }
  //otherwise, it is bright
  else
  {
    digitalWrite(ledPin, LOW); // turn off light
    Serial.print("Counter:");
    Serial.println(counter);
  }
  if (counter == 10) {
    counter = 0;
    for (int pos = 0; pos <= 2; pos += 1) {
      // in steps of 1 degree
      servoMotor.write(pos);
      delay(15); // waits 15ms to reach the position
    }
  }

}
