int led = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,LOW);
for(int i=0; i<=255; i++)
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
}
}
