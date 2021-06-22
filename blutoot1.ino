#include <SoftwareSerial.h>   // Librería software serial
SoftwareSerial BT1(4, 2);   //RX Y TX

void setup()
{
  BT1.begin(9600);       // Puerto serie
  Serial.begin(9600);   // Se inicia el puerto serie
}

void loop()
{
  if (BT1.available())         //Si un dato llega por el puerto BT1
  {
    Serial.write(BT1.read());  //se mostrará en el monitor serie
  }

  if (Serial.available())       // Si se introduce un dato por el monitor serie
  {
    BT1.write(Serial.read());  //se enviará al puerto BT1
  }
}
