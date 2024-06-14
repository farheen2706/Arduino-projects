int motor1pin1 = 8;
int motor1pin2 = 9;
int motor2pin1 = 10;
int motor2pin2 = 11;

int data;

void setup()
{
pinMode(motor1pin1, OUTPUT);
pinMode(motor1pin2, OUTPUT);
pinMode(motor2pin1, OUTPUT);
pinMode(motor2pin2, OUTPUT);

Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    data = Serial.read();
    Serial.println(data);    //Uncomment this line to print the incomming data

    if(data == 'F')
    {
      forward();
    }
    if(data == 'B')
    {
     backward();
    }
    if(data == 'R')
    {
      right();
    }
    if(data == 'L')
    {
     left();
    }
    if(data == 'S')
    {
    stop();
    }  
  }
  else
  {
    Serial.println("No data is being sent");
  }
}
void forward()
{
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  digitalWrite(motor2pin1, LOW);

}
void backward()
{
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);

}
void right()
{
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  Serial.println("right");
}
void left()
{
   digitalWrite(motor2pin2,LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  Serial.println("Left");
}

void stop(){
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2,LOW);
    digitalWrite(motor2pin1,LOW);
    digitalWrite(motor2pin2,LOW);
    Serial.println("Stop");
}
