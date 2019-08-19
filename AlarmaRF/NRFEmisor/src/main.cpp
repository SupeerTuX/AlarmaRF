#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//Declaremos los pines CE y el CSN
#define CE_PIN 10
#define CSN_PIN 9
 
//Variable con la dirección del canal por donde se va a transmitir
byte direccion[5] ={'c','a','n','a','l'};

//creamos el objeto radio (NRF24L01)
RF24 radio(CE_PIN, CSN_PIN);

//vector con los datos a enviar
float datos[3];

void setup()
{
  //inicializamos el NRF24L01 
  radio.begin();
  radio.setPALevel(RF24_PA_MAX);
  //inicializamos el puerto serie
  Serial.begin(115200); 
  Serial.println("Inicio de programa EMISOR");
 
   //Abrimos un canal de escritura
  radio.openWritingPipe(direccion);
 
}
 
void loop()
{ 
 //cargamos los datos en la variable datos[]
 //datos[0]=analogRead(0)* (5.0 / 1023.0);
 //datos[1]=millis();
 //datos[2]=3.14;

 char datos[] = {"AT+StatusOK"};
 //enviamos los datos
 bool ok = radio.write(datos, sizeof(datos));
  //reportamos por el puerto serial los datos enviados 
  if(ok)
  {
     Serial.print("Datos enviados: "); 
     Serial.println(datos); 
   
  }
  else
  {
     Serial.println("no se ha podido enviar");
  }
  delay(1000);
}
