/*
 * IoT ESP8266 Based Mood Lamp (RGB LED) Controller Program
 * https://circuits4you.com
 */
 
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//SSID and Password of your WiFi router
const char* ssid = "ENter you wifi name";
const char* password = "Enter wifi password";

ESP8266WebServer server(80);

//LED Connections

#include "myfirst.h"
#include "mysecond.h"
#include "mythird.h"
//=======================================================================
//                    handles main page
//=======================================================================
//String first_page,second_page;


//=======================================================================
//                    Handle Set Color
//=======================================================================
void cat() {
  Serial.println("Second Webpage requested");
 server.send(200, "text/html",first); 
}
void man() {
  Serial.println("First Webpage requested");
 server.send(200, "text/html",second); 
}
void dog() {
  Serial.println("Third Web Page requested");
 server.send(200, "text/html",third); 
}
//=======================================================================
//                    SETUP
//=======================================================================
void setup(){
  Serial.begin(115200);   //Start serial connection  

  
    WiFi.begin(ssid, password);     //Connect to your WiFi router
  Serial.println("");
  
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  //If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //IP address assigned to your ESP
  
  server.on("/", man);  //Associate handler function to path
  server.on("/second",cat);
  server.on("/third",dog);

    
  server.begin();                           //Start server
  Serial.println("HTTP server started");
}
//=======================================================================
//                    LOOP
//=======================================================================
void loop(){
  server.handleClient();
}
