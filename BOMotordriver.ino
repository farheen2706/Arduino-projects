int motor1pin1 = 13;
int motor1pin2 = 12;
int motor1pin2 = 10;
int motor1pin2 = 9;

void setup()
{
pinMode(motor1pin1, OUTPUT);
pinMode(motor1pin2, OUTPUT);
pinMode(motor2pin1, OUTPUT);
pinMode(motor2pin2, OUTPUT);
}

void loop()
{
  digitalWrite(motor1pin1, HIGH);
digitalWrite(motor1pin2, HIGH);
digitalWrite(motor2pin1, HIGH);
digitalWrite(motor2pin2, HIGH);
delay(3000);
}



