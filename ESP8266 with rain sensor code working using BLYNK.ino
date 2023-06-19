#include <SoftwareSerial.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "6AnSrLjI7CTMLOuJh01rLQxn1z-2N1nz";
char ssid[] = "Redmi";
char pass[] = "12345678";
BlynkTimer timer;
void moisture() {
 int rainSensor = analogRead(A0);
rainSensor = map(rainSensor, 0, 1023, 0, 350);
 Blynk.virtualWrite(V5, rainSensor);
 Serial.println(rainSensor);
}
void setup() {
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
 timer.setInterval(350, moisture);
}
void loop()
{
 Blynk.run();
 timer.run();
