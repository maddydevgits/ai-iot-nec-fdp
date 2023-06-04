#include <DHT.h>

DHT dht(4,DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h=dht.readHumidity();
  if(isnan(h)||isnan(t)) {
    return;
  }
  printf("Humidity=%.0f%\n",h);
  delay(4000);
}
