#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <ArduinoJson.h>

#include "IoesptProvisioning.h"

IoesptProvisioning provisioning;

void setup() {
  Serial.begin(115200); 
  Serial.println("*IOESP-Code Start - Hello world."); 

  provisioning.setupConfigPortal();
  
}

void loop(void){
  
}
