#ifndef IoT_h
#define IoT_h

#include "Arduino.h"

class IoT {
public:
    IoT();          // Constructor
    void begin();
    void sendData(const String &data);
private:
    String _data;
};

#endif
