int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,LOW); //LED is off by default
  Serial.println("LED is off");//LED should be off
  delay(1000);//Off for one second
  digitalWrite("LED is On");
  delay(3000);//LED is On for 3 seconsds
}
