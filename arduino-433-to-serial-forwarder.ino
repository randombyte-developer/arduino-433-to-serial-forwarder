#include <RCSwitch.h>

RCSwitch receiver = RCSwitch();

void setup() {
  Serial.begin(9600);
  receiver.enableReceive(0);
}

void loop() {
  if (receiver.available()) {
    Serial.print(receiver.getReceivedValue());
    Serial.print(";");
    receiver.resetAvailable();
  }
}
