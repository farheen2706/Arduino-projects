#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup()
{
  motor1.setSpeed(255);
motor2.setSpeed(255);
}

void loop()
{
  motor1.run(BACKWARD);
motor2.run(FORWARD); //
}
