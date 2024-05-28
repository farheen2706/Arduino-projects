const int button = 8, led = 12;

void setup(){
Serial.begin(9600);
pinMode(button.INPUT_PULLUP); //intialising the button with the internal resistor for uniform digital waves
pinMode(led.OUTPUT); 
}

void loop(){
int button_data = digitalRead(button);
Serial.println(button_data);
if(button_data == LOW){
Serial.println("Button is not pressed");
digitalWrite(led.HIGH);
}

if(button_data == HIGH){
Serial.println("Button is pressed"):
digitalWrite(led.LOW);
}
}
















































































