
void printWiFiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your board's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}


int rawToLux(int raw){
  float vout = (1023 - float(raw)) * (VIN / float(1023));// Conversion analog to voltage
  float res = (R * (VIN - vout))/vout; // Conversion voltage to resistance
  int lux=500/(res/1000); // Conversion resitance to lux
  return lux;
}
