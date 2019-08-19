#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
 
//Declaremos los pines CE y el CSN
#define CE_PIN 10
#define CSN_PIN 9
 
//Variable con la dirección del canal que se va a leer
byte direccion[5] ={'c','a','n','a','l'}; 

//creamos el objeto radio (NRF24L01)
RF24 radio(CE_PIN, CSN_PIN);

//vector para los datos recibidos
char datos[12];

void setup()
{
 //inicializamos el NRF24L01 
  radio.begin();
  radio.setPALevel(RF24_PA_MAX);
  //inicializamos el puerto serie
  Serial.begin(115200); 
  Serial.println("Inicio de programa RECEPTOR");
  
  //Abrimos el canal de Lectura
  radio.openReadingPipe(1, direccion);
  
    //empezamos a escuchar por el canal
  radio.startListening();
 
}
 
void loop() {
 //uint8_t numero_canal;
 //if ( radio.available(&numero_canal) )
 if ( radio.available() )
 {    
     //Leemos los datos y los guardamos en la variable datos[]
     radio.read(datos,sizeof(datos));
     
     //reportamos por el puerto serial los datos recibidos
     Serial.print("Datos recividos: ");
     Serial.println(datos);

 }
 else
 {
     Serial.println("No hay datos de radio disponibles");
 }
 delay(1000);
}
