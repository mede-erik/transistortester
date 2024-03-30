#! /bin/bash

sudo avrdude -v -c usbasp-clone -p m328p -P usb -U flash:w:mega328_T4_v2_st7565.hex:i -U eeprom:w:mega328_T4_v2_st7565.eep:i -C /etc/avrdude.conf

