A lightweight and efficient runtime system for AVR chips based on the work of Arduino Project.

Features:

1. very lightweight
> The generated AVR binary size is much smaller than using the original Arduino Library. ( up to 50% code size reduction )

2. high efficiency
> Many functions provided by Arduino-Lite only cost a single clock cycle to finish. E.g. the Arduino-lite version's digitalWrite function(DIGITAL\_WRITE) only emit a single sbi AVR instruction.

3. support more AVR chips and more frequency levels
> Besides the Atmega8, Atmega168, Atmega328, Atmega1280 chips, Arduino-Lite also supports the following chips:
> Attiny2313, Attiny26, Atmega48, Atmega88

> And for the chip clock frequency, Arduino-Lite supports 1Mhz - 20Mhz frequency range.

4. pure C implemention