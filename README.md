# HumiditySensor
The Sensor{
     We will be using a DHT11 Humidity sensor. 
     The DHT11 is a basic, ultra low-cost digital temperature and humidity sensor. 
     It uses a capacitive humidity sensor and a thermistor to measure the surrounding air and spits out a digital signal on the data pin (no analog input pins needed).
     You can only get new data from it once every 2 seconds, the sensor readings can be up to 2 seconds old.
     The DHT11 measures relative humidity(amount of water vapor in air vs. the saturation point of water vapor in the air).
     The DHT11 detects water vapor by measuring the electrical resistance between two electrodes.
}
Connection{
     VCC - 5V
     Data out - Pin 2 and 5V through 10 KiloOhm resistor
     Not connected
     Ground 
}
Controller{
     We will use the Arduino UNO Development Board
     We will need the DHT Sensor library.(Installed together with Adafruit Sensor Library)     
}
 
