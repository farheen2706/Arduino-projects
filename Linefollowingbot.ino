int motor1pin1 = 8;
int motor1pin2 = 9;
int motor2pin1 = 10;
int motor2pin2 = 11;
int ir1=12, ir2= 13;
//configuring motor and ir pins

void setup()
{
pinMode(motor1pin1, OUTPUT);
pinMode(motor1pin2, OUTPUT);
pinMode(motor2pin1, OUTPUT);
pinMode(motor2pin2, OUTPUT);
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
Serial.begin(9600);
}

void loop()
{
  if(digitalRead(ir2)==LOW && digitalRead(ir1)==LOW){
    forward(); 
  }//if both the ir send input then bot moves forward
else if(digitalRead(ir1)==HIGH && digitalRead(ir2)==LOW){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
  right();

}//if right ir sends iput then the bot turns right
else if(digitalRead(ir2)==HIGH && digitalRead(ir1)==LOW){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
 left();

}//if left ir sends iput then the bot turns left
else{
   digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}//stops when no input is ditected
  //Serial.println(ir1);
  //Serial.println(digitalRead(ir2));
}
void backward()//function for calibetrating the motors backward
{
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  digitalWrite(motor2pin1, LOW);

}
void forward()//function for calibrating the motors forward
{
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);

}
void right()//function for calibrating the motors right
{
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  Serial.println("right");
}
void left()//function for calibrating the motors backward
{
   digitalWrite(motor2pin2,LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  Serial.println("Left");
}
