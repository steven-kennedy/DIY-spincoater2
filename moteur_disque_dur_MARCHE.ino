# include <Servo.h>

Servo motor;
int throttlePin = 10;
int desired_frequency = 1000;
int converted_frequency = 0;
int minimum = 40;
int maximum_frequency = 7000;

void calibration(){
  motor.write(140);
  delay(4000);
  motor.write(179);
  delay(4000);
}

void setup() {
  motor.attach(throttlePin);
  Serial.begin(38400);
  calibration();
  delay(4000);
}

  
void loop() {
  converted_frequency = map(desired_frequency,0,maximum_frequency,0,179);
  motor.write(converted_frequency);
  delay(3000);
  Serial.println(converted_frequency);
  desired_frequency=desired_frequency+1000;
  
}
