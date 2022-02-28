#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char auth[]="1BNgTnt85Lus2HoTt1CD_rNfiCJ3wr1L";

char ssid[]="need help??";
char pass[]="d_arnav29";

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   Blynk.begin(auth, ssid, pass);
}










































































void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
