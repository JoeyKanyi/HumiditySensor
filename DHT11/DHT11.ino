#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2 //Declare the pin connected
#define DHTTYPE DHT11 //Declare the Specific Sensor being used

DHT dht(DHTPIN, DHTTYPE);//Initialize the sensor

void setup(){
  Serial.begin(9600);//Initialize Serial monitor
  dht.begin();
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.println(h);
  delay(2000);
}
