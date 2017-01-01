// #include "Arduino.h"
// #include <SPI.h>
// #include "RF24.h"
//
// RF24 radio(9, 10);
//
// byte address[6] = "zgueg";
//
// void setup()
// {
//   radio.begin();
//   radio.setPALevel(RF24_PA_HIGH);
//   radio.setChannel(125);
//
//   Serial.begin(115200);
//   Serial.println(F("RF24/examples/GettingStarted"));
//
//   radio.openReadingPipe(1, address);
//   radio.startListening();
// }
//
// void loop()
// {
//   float i;
//
//   if (radio.available()) {
//                                                           // Variable for the received timestamp
//     while (radio.available()) {                                   // While there is data ready
//       radio.read( &i, sizeof(float) );             // Get the payload
//     }
//
//     Serial.print(F("Got value "));
//     Serial.println(i);
//   }
// }
