#include <RH_ASK.h>//radio head header
#include <SPI.h>//serial communication
//creating amplitude shift keyung
RH_ASK rf_driver;//ask object to access the functions related to the readihead library

void setup() {
  // put your setup code here, to run once:
  if (!rf_driver.init())
  {
    Serial.print("Failed");//initializing ASK object
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  const char *msg = "Transmitting"; //MEssage for transmitting
  rf_driver.send((uint8_t *)msg, strlen(msg));//takes two parameters array of data(encoded using uint_t) and number of bytes(length of the string)
  rf_driver.waitPacketSent();//waits until the transmission is complete
  delay(1000);//delay for 1s
}
