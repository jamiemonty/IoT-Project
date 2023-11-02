#include <Servo.h>

Servo servo;

void setup() {
  servo.setPeriodHertz(50); // Set the PWM frequency to 50Hz
  servo.attach(13); // Attach the servo to pin 13
}

void loop() {
  // Rotate the servo 180 degrees clockwise
  for (int angle = 0; angle <= 180; angle += 1) {
    servo.write(angle);
    delay(15); // Delay between degree
  }
  delay(20000); // Wait for 20 seconds at the end position
  // Bring back the servo to the initial position
  for (int angle = 180; angle >= 0; angle -= 1) {
    servo.write(angle);
    delay(15);
  }
  delay(20000); 
}