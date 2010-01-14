/*
 *   Demo sketch modified from Arduino
 *
 *
 */

#include "arduino_lit.h"

#define ledPin 11    // LED connected to digital pin 11

void setup()  {
  // initalize the serail port at the default baud rate 19200
  // you can still use the orignal serial_begin(19200); as well
  SERIAL_BEGIN();

  PIN_MODE(ledPin,OUTPUT);

  // Enable PWM output for ledPin
  PWM_ENABLE(ledPin); 

  // Previous Print class has been changed to C functions
  println("Hello from Arduino_lite!", serial_puts);
} 

void loop()  {
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    PWM_SET(ledPin, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect   
    // sleep is the power saving version of the orignal delay func
    sleep(30);       

    println(millis(), serial_puts);
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    PWM_SET(ledPin, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    sleep(30);                            
  } 
}

int main()
{
  init();
  setup();
  while(1)
    loop();
}
