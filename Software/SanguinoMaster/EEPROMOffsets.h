#ifndef __EEPROM_OFFSETS_H__
#define __EEPROM_OFFSETS_H__

#define EEPROM_CHECK_LOW 0x5A
#define EEPROM_CHECK_HIGH 0x78

#define EEPROM_CHECK_OFFSET 0
#define EEPROM_AXIS_INVERSION_OFFSET 2
#define EEPROM_MACHINE_NAME_OFFSET 32

bool hasEEPROMSettings();

#endif // __EEPROM_OFFSETS_H__
