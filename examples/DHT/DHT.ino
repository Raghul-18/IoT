
#include "DHT.h"         
#define DHTTYPE DHT11    
#define dht_dpin D5 
DHT dht(dht_dpin, DHTTYPE);  
void setup(void) 
{  
    dht.begin(); 
    Serial.begin(9600); 
} 
void loop() { 
    float h = dht.readHumidity(); 
    float t = dht.readTemperature();          
    Serial.print("humidity = "); 
    Serial.print(h); 
    Serial.print("%  "); 
    Serial.print("temperature = "); 
    Serial.print(t);  
    Serial.println("C  "); 
    delay(800); 
} 
