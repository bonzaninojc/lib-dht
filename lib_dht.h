
#ifndef LIB_DHT_H
#define LIB_DHT_H

#include <Arduino.h>
#include <DHT.h>

enum DHTType {
    DHT_TYPE_11,
    DHT_TYPE_22
};

class LibDht {
private:
    int _pin;
    DHTType _type;
    DHT _dht;

public:
    LibDht(int pin, DHTType type = DHT_TYPE_22);
    float readTemperature();
    float readHumidity();
};


#endif
