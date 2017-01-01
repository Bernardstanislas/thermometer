#include "Arduino.h"
#include <SPI.h>
#include "RF24.h"
#include "DHT.h"

#define DHT_PIN 8
#define DHT_TYPE DHT11

#define RADIO_CE_PIN 9
#define RADIO_CS_PIN 10
#define RADIO_CHANNEL 125
#define RADIO_ADDRESS "zgueg"

RF24 radio(RADIO_CE_PIN, RADIO_CS_PIN);
DHT dht(DHT_PIN, DHT_TYPE);

byte address[6] = RADIO_ADDRESS;

void setup()
{
  radio.begin();
  radio.setPALevel(RF24_PA_MAX);
  radio.setChannel(RADIO_CHANNEL);

  radio.openWritingPipe(address);

  dht.begin();
}

void loop()
{
  delay(5000);

  float t = dht.readTemperature();

  radio.write(&t, sizeof(float));
}
