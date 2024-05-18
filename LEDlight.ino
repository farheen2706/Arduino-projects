//Global variable declaration
#include<Servo.h>

Servo s;
int led = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
s.attach (9);
//pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(led,LOW);
for(int i=0;i<=180;i++)
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
/*for(int i=0; i<=255; i++)
{
  analogWrite(led,HIGH);
  delay(50);
  Serial.println("Fade in");
}
for(int i=255; i>=0; i--)
{
  analogWrite(led,LOW);
  delay(50);
  Serial.println("Fade out");
}*/
//Serial.println("LED is Off");
//delay(1000);
//digitalWrite(led, HIGH);
//Serial.println("LED is On");
//delay(3000);
}