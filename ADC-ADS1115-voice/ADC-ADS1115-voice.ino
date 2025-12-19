//https://learn.adafruit.com/adafruit-4-channel-adc-breakouts/arduino-code
#include <Wire.h>
#include <Adafruit_ADS1X15.h>

Adafruit_ADS1115 ads1115;

void setup(void)
{
  Serial.begin(9600);
  ads1115.begin();
}

void loop(void)
{
  int16_t adc0;
  int16_t asum = 0;
  for(int index = 0;index < 100;index ++){
     adc0 = ads1115.readADC_SingleEnded(0);  
     asum += adc0;
  }
  Serial.println(asum);
}
