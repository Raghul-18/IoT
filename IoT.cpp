#include "Arduino.h"
#include "IoT.h"

IoT::IoT() {
    // Constructor implementation
    _data = "";
}

void IoT::begin() {
    // Initialization code
    Serial.begin(9600);
}

void IoT::sendData(const String &data) {
    // Example function implementation
    _data = data;
    Serial.println("Sending data: " + _data);
}
