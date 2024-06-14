int motor = 8;
int motor1 = 9;
int motol = 10;
int motol1 = 11;

int irr = 12;
int irl = 13;




void setup() {
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motol,OUTPUT);
  pinMode(motol1,OUTPUT);
  pinMode(irr,INPUT);
  pinMode(irl,INPUT);

}

void loop() {
  
  if (digitalRead(irl) == LOW && digitalRead(irr) == LOW){
    
    frwd();
    
 }
 else if (digitalRead(irr) == HIGH && digitalRead(irl) == LOW){
   digitalWrite(motor,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,LOW);
    digitalWrite(motol1,LOW);
  right();
  
   
 }
 else if (digitalRead(irl) == HIGH && digitalRead(irr) == LOW){
   digitalWrite(motor,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,LOW);
    digitalWrite(motol1,LOW);
  left();
  
   
 }
 
 else {
  stp();
    
 }
}


void left(){
    digitalWrite(motor,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,LOW);
    digitalWrite(motol1,LOW);
    Serial.println("LEFT");
}

void right(){

    Serial.println("Stop");
    digitalWrite(motor,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,HIGH);
    digitalWrite(motol1,LOW);
    Serial.println("Right");
}

void frwd(){
    digitalWrite(motor,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,HIGH);
    digitalWrite(motol1,LOW);
    Serial.println("Frwd");
}

void stp(){
    digitalWrite(motor,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motol,LOW);
    digitalWrite(motol1,LOW);
    Serial.println("Stop");
}
