int led=8; //configuring the led light

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    String a = Serial.readString();
    if(a == "1")
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led, LOW);
    }
    Serial.write("Hello from Bluetooth");
  }
  
}
