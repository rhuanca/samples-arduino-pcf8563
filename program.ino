/*--------------------------------------------------------------
  Program:      PCF8563_clkout_wrt

  Description:  Writes to the CLKOUT_CONTROL register of the
                PCF8563 RTC IC to set the frequency on the
                CLKOUT pin to 1Hz. For testing writing to the
                PCF8563.
                
  Date:         3 February 2013
 
  Author:       W.A. Smith, http://startingelectronics.org
--------------------------------------------------------------*/
#include <Wire.h>

#define RTC_ADDR  (0xA2 >> 1)

void setup()
{
    Wire.begin();        // initialize the I2C/TWI interface
    delay(1);         // delay as a precaution
    
    // write to the PCF8563
    Wire.beginTransmission(RTC_ADDR);
    Wire.write(0x0D);                  // point to the CLKOUT_CONTROL register
    Wire.write(0x82);                  // set the CLKOUT frequency to 1HZ
    Wire.endTransmission();
}

void loop()
{
    // do nothing here, could also put the write code here
}
