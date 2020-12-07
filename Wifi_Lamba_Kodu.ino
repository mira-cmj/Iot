/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Blynk Uygulamasında Auth Token şifresini almalısınız.
char auth[] = "Auth token kısmındaki şifre";

// Wifi bilgilerinin girileceği kısım
char ssid[] = "Wifi Adı"; // Wifi adının girileceği kısım
char pass[] = "Wifi Şifresi"; // Wifi şifresinin girileceği kısım

void setup()
{
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
