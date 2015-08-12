#Arduino-Lite API reference

The following document will no longer been updated, please refer to the following document for detailed description:

> http://www.robopeak.net/blog/?p=185

下面的文章不再更新，请访问下面的链接查看具体的说明

> http://www.robopeak.net/blog/?p=107

# Introduction #

This document describes the API provided by Arduino-Lite. Since this library is based on the work of Arduino Project, most of the original functions are inherited. For these functions, you can refer to the Language Reference Page of Arduino Project (http://arduino.cc/en/Reference/HomePage).

This document focuses on the following parts:
  * New APIs added by Arduino-Lite
  * Existing APIs that have been extended/changed by Arduino-Lite
  * The extended Arduino Pin naming model
  * Advanced features

# New APIs added by Arduino-Lite #

## Overview ##
Arduino-Lite provides the following APIs, most of them are defined as Marco:

**IO controlling(wiring\_lit.h)**
  * PIN\_MODE( pin, mode )
> // fast version of pinMode()

  * DIGITAL\_WRITE( pin, value )
> //fast version of digitalWrite

  * DIGITAL\_READ( pin )
> //fast version of digitalRead

  * ANALOG\_WRITE( pin, pwm\_value )
> //fast version of analogWrite

  * PWM\_SET( pin, pwm\_value )
> //set the PWM value to the specified arduino pin

  * PWM\_SET\_SAFE( pin, pwm\_value)
> //similar to PWM\_SET, except that the PWM output will be disabled when pwm\_value==0

  * PWM\_ENABLE( pin )
> //enable PWM output at the specified arduino pin

  * enable\_adc(void)
> // enable the AD-convert module of the chip

  * disable\_adc(void)
> // disable the AD-convert module of the chip

**Serial Port(USART) Operation(net\_serial.cpp)**
  * SERIAL\_BEGIN()
> //initialize the serial port#0 operating on the default 19200 Baud-rate

  * void serial\_begin(unsigned long baud);
> //the C implementation of Serial.begin()

  * uint8\_t serial\_available(void);
> //the C implementation of Serial.available()

  * int serial\_getc(void);
> //the C implementation of Serial.getc()

  * void serial\_flush(void);
> //the C implementation of Serial.flush()

  * void serial\_putc(uint8\_t c);
> //the C implementation of Serial.putc()

  * void serial\_puts(uint8\_t `*`buf, size\_t size);
> //the C implementation of Serial.puts()

  * void serial\_puts(uint8\_t `*`buf);
> //the C implementation of Serial.flush()

  * serial\_xxxx\_at()
> //for the AVR chip with multiple serial ports available, you can use these interfaces to access a specific serial port.

**String format functions(simp\_print.cpp)**
  * print(..., puts\_func func);
> // the C implementation of Print::print

  * print(char c, putc\_func func);
> // the C implementation of Print::print

  * print(uint8\_t b, putc\_func func);
> // the C implementation of Print::print

  * printNumber(unsigned long n, uint8\_t base, puts\_func func) ;
> // the C implementation of Print::print

  * printFloat(double number, uint8\_t digits, puts\_func func)  ;
> // the C implementation of Print:: printFloat

**Timing**
  * sleep(unsigned long ms)
> //similar to delay() function, but sleep() will set the chip to the IDLE mode to save power.

  * delay\_alert(unsigned long ms)
> //alertable delay, the delay process can be interrupted and cancelled by invoking alert().

  * alert()
> //set the alert flag to suspend a delay function

**Interrupt Handling**
  * ENABLE\_INT(vector, mode)
> //enable the interrupt #vector

  * DISABLE\_INT(vector)
> //disable the interrupt #vector

## Detailed Info ##
TODO: to be documented

# Existing APIs that have been extended/changed #
TODO: to be documented