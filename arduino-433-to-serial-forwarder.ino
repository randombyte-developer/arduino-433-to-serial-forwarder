#include <RCSwitch.h>

RCSwitch receiver = RCSwitch();

void setup() {
  Serial.begin(9600);
  receiver.enableReceive(0);
}

void loop() {
  if (receiver.available()) {
    
    Serial.print("Received ");
    Serial.print( receiver.getReceivedValue() );
    Serial.print(" / ");
    Serial.print( receiver.getReceivedBitlength() );
    Serial.print("bit ");
    Serial.print("Protocol: ");
    Serial.println( receiver.getReceivedProtocol() );

    receiver.resetAvailable();
  }
}
