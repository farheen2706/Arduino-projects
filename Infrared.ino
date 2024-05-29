int led=13,ir=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);//setting up serial monitor
}

void loop() {
  int data=digitalRead(ir);
  if(data == HIGH)
  {
    Serial.println("Bug");
    digitalWrite(led,HIGH);
  }
  else
  {
    Serial.println("Bug Found");
    digitalWrite(led,LOW);
  }
  
  // put your main code here, to run repeatedly:

}
