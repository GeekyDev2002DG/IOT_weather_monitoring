#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
/* This driver uses the Adafruit unified sensor library (Adafruit_Sensor),
 which provides a common 'type' for sensor data and some helper functions.

 To use this driver you will also need to download the Adafruit_Sensor
 library and include it in your libraries folder.
 You should also assign a unique ID to this sensor for use with
 the Adafruit Sensor API so that you can identify this particular
 sensor in any data logs, etc. To assign a unique ID, simply
 provide an appropriate value in the constructor below (12345
 is used by default in this example).

 Connections
 ===========
 Connect SCL to analog 5
 Connect SDA to analog 4
 Connect VCC to 3.3V DC
 Connect GROUND to common ground

 History
 =======
 2013/JUN/17 - Updated altitude calculations (KTOWN)
 2013/FEB/13 - First version (KTOWN)
*/

Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
/**************************/
/*
 Displays some basic information on this sensor from the unified
 sensor API sensor_t type (see Adafruit_Sensor for more information)
*/
/**************************/
void displaySensorDetails(void)
{
 sensor_t sensor;
 bmp.getSensor(&sensor);
 Serial.println("------------------------------------");
 Serial.print ("Sensor: "); Serial.println(sensor.name);
 Serial.print ("Driver Ver: "); Serial.println(sensor.version);
 Serial.print ("Unique ID: "); Serial.println(sensor.sensor_id);
 Serial.print ("Max Value: "); Serial.print(sensor.max_value); Serial.println(" hPa");
 Serial.print ("Min Value: "); Serial.print(sensor.min_value); Serial.println(" hPa");
 Serial.print ("Resolution: "); Serial.print(sensor.resolution); Serial.println(" hPa");
 Serial.println("------------------------------------");
 Serial.println("");
 delay(250);
}
/**************************/
/*
 Arduino setup function (automatically called at startup)
*/
