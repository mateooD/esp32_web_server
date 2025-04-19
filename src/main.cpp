#include <WiFi.h>
#include <WebServer.h>


const char* ssid = "Fibertel WiFi236 2.4GHz";
const char* password = "00441265543";

WebServer server(80); // Puerto HTTP

void handleRoot() {
  server.send(200, "text/html", "<h1>Servidor ESP32</h1><p>Todo listo para escalar</p>");
}

void setup() {
  //Connect to Wi-Fi network with SSID and password
  Serial.begin(115200); 
  Serial.println("Conectando..."); 
  Serial.println(ssid);

  WiFi.begin(ssid, password);
 

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }


  Serial.println("\nConectado a la red Wi-Fi");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
  Serial.println("Servidor HTTP listo");
}

void loop() {
  server.handleClient();
}

