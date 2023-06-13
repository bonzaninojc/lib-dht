#include "lib_dht.h"

LibDht::LibDht(int pin, DHTType type) : _pin(pin), _type(type), _dht((uint8_t) pin, (type == DHT_TYPE_11 ? DHT11 : DHT22)){
    _dht.begin();
}

float LibDht::readTemperature() {
    return _dht.readTemperature();
}

float LibDht::readHumidity() {
    return _dht.readHumidity();
}