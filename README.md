# samd09-tiny.cpp
Sample project using [`tiny`](https://github.com/ryanplusplus/tiny.cpp) with SAMD09G14A.

## Setup
- Install `gcc-arm-none-eabi`
- Install [`openocd`](https://sourceforge.net/p/openocd/code/ci/master/tree/)

## Use
### Compile
```shell
make -f target.mk
```

### Clean
```shell
make -f target.mk clean
```

### Erase via SWD
```shell
make -f target.mk erase
```

### Flash via SWD
```shell
make -f target.mk upload
```

## Resources
- [SAMD09G14A Datasheet](http://ww1.microchip.com/downloads/en/devicedoc/atmel-42414-sam-d09_datasheet.pdf)
- [SAMD Arduino Core](https://github.com/arduino/ArduinoCore-samd)
- [ATSAMD09 seesaw Pinout](https://learn.adafruit.com/adafruit-seesaw-atsamd09-breakout/pinouts)
- [ATSAMD09 seesaw Schematic](https://cdn-learn.adafruit.com/assets/assets/000/047/799/original/sensors_schematic.png?1509562518)
