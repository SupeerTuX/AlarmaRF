/**
 * @file main.cpp
 * @author SuperTux (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-31
 * 
 * @copyright Copyright (c) 2019
 * 
 * Receptor Base de la red NRF24l01 nodo 00
 * Este modulo recibe las transmisiones de los
 * emisores de de la red NRF24l01
 */

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <RF24Network.h>

//Declaremos los pines CE y el CSN
#define CE_PIN 10
#define CSN_PIN 9

//Variable con la dirección del canal que se va a leer
//byte direccion[5] = {'c', 'a', 'n', 'a', 'l'};
const uint16_t base = 00;

//creamos el objeto radio (NRF24L01)
RF24 radio(CE_PIN, CSN_PIN);
RF24Network network(radio);

//vector para los datos recibidos
char data[32] = {};

void setup()
{
  //inicializamos el NRF24L01
  radio.begin();
  radio.setPALevel(RF24_PA_MAX);
  network.begin(90, base);
  radio.setDataRate(RF24_1MBPS);

  //inicializamos el puerto serie
  Serial.begin(115200);
  Serial.println("Inicio de programa RECEPTOR");
}

void loop()
{
  network.update();
  while (network.available())
  {
    RF24NetworkHeader header;
    unsigned long incomingData;
    network.read(header, data, sizeof(data));
    Serial.print("Data From: ");
    Serial.print(header.from_node);
    Serial.print(" Data: ");
    Serial.println(data);
  }
}
