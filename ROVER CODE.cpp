#define BLYNK_TEMPLATE_ID  
#define BLYNK_TEMPLATE_NAME "Mobile rover"
#define BLYNK_AUTH_TOKEN "FRiCTmjwVVZpZLD996xQBWPzmGhvnL5T"

//working code...
// Required libraries for this code:
// - WiFi.h: Provides the necessary functions to connect to a WiFi network using the ESP32.
// - WiFiClient.h: Facilitates the creation of WiFi client objects, which can be used to create connections to servers.
// - BlynkSimpleEsp32.h: Provides Blynk functionality specific to the ESP32.

#define BLYNK_TEMPLATE_ID "TMPL3jP0h1Exd"
#define BLYNK_TEMPLATE_NAME "Mobile rover"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Enter your Auth token
char auth[] = "FRiCTmjwVVZpZLD996xQBWPzmGhvnL5T";

// Enter your WIFI SSID and password
char ssid[] = "IITRPR";
char pass[] = "V#6qF?pyM!bQ$%NX";

void setup() {
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
