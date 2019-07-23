#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

String  SENSOR1;
String  SENSOR2;


WiFiServer server(80);

String  httpurl;
String  TheHiddenAnswerOfClient;
HTTPClient http;

String SendWithAnswer(String IPcache, String monmessagecache) {
  httpurl = "http://";
  httpurl += IPcache;
  httpurl += "/";
  httpurl += monmessagecache;
  http.begin(httpurl);
  http.GET();
  TheHiddenAnswerOfClient = (http.getString());
  http.end();
  return TheHiddenAnswerOfClient;
}

void setup()
{
  SENSOR1 = "";

  SENSOR2 = "";

  Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);
  Serial.println("START");
  WiFi.begin("JK", "doyouloveme");
  while ((!(WiFi.status() == WL_CONNECTED))) {
    delay(300);
    Serial.print("..");

  }
  Serial.println("Connected");
  //  WiFi.config(staticIP609_30, gateway609_30, subnet609_30);
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP().toString()));
  server.begin();

}


void loop()
{
  SENSOR1 = (SendWithAnswer("192.168.43.209", "temperature"));
  SENSOR2 = (SendWithAnswer("192.168.43.54", "temperature"));

  Serial.print("Sensor1");
  Serial.println(SENSOR1);
  Serial.print("Sensor2");
  Serial.println(SENSOR2);
}
