//Global variable declaration. ""
#include<Servo.h> //importing package for servo motor

Servo s;//comfiguring servo motor
int led = 8;
void setup() {
  // put your setup code here, to run once
Serial.begin(9600);
s.attach (9);

}

void loop() {
  // put your main code here, to run repeatedly:
//Servo motor rotation
for(int i=0;i<=180;i++)//loop for rotation
{
  s.write(i);
  delay(10);
  Serial.println("Rotation Clockwise");
}
for(int i=180;i>=0;i--)
{
  s.write(i);
  delay(10);
  Serial.println("Rotation Anticlockwise");
}
}
