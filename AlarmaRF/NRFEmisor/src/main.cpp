/*
  Arduino Wireless Network - Multiple NRF24L01 Tutorial
        == Node 02 (Child of Master node 00) ==    
*/
#include <RF24Network.h>
#include <RF24.h>
#include <SPI.h>

//Declaremos los pines CE y el CSN
#define CE_PIN 10
#define CSN_PIN 9

//creamos el objeto radio (NRF24L01)
RF24 radio(CE_PIN, CSN_PIN); // nRF24L01 (CE,CSN)
RF24Network network(radio);  // Include the radio in the network

const uint16_t this_node = 02;       // Address of our node in Octal format ( 04,031, etc)
const uint16_t base = 00;            // Address of the other node in Octal format
const unsigned long interval = 1000; //ms  // How often to send data to the other unit
unsigned long last_sent;             // When did we last send?
void setup()
{
   SPI.begin();
   radio.begin();
   network.begin(90, this_node); //(channel, node address)
   radio.setDataRate(RF24_1MBPS);
}

void loop()
{
   network.update();
   //===== Sending =====//
   unsigned long now = millis();
   if (now - last_sent >= interval)
   { // If it's time to send a data, send it!
      last_sent = now;
      unsigned long ledBrightness = 128;
      RF24NetworkHeader header(base);                                         // (Address where the data is going)
      bool ok = network.write(header, &ledBrightness, sizeof(ledBrightness)); // Send the data
   }
}