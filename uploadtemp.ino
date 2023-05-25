// This #include statement was automatically added by the Particle IDE.
#include <ThingSpeak.h>

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

#define DHTPIN D2 

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
    dht.begin();
}

void loop() {
    
    float temp;

temp = dht.getTempCelcius();

Particle.publish("temp", String(temp), PRIVATE);

delay(30000);

}
