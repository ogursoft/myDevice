#include <DallasTemperature.h>

// function to print a device address
String printAddress(DeviceAddress deviceAddress)
{
  String temprom;
  for (uint8_t i = 0; i < 8; i++)
  {
    if (deviceAddress[i] < 16)
      ;
    temprom = temprom + String(deviceAddress[i], HEX);
  }
  return temprom;
}
