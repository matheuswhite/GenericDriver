#ifndef MWI2C_H
#define MWI2C_H

#include "MWDriver.h"

void MWI2CInit(MWDriver* driver) {
        driver.open = MWI2COpen;
        driver.close = MWI2CClose;
        driver.write = MWI2CWrite;
        driver.read = MWI2CRead;
}

void MWI2COpen(uint8_t addr);
void MWI2CClose();
void MWI2CWrite(uint16_t reg, uint8_t data);
uint8_t MWI2CRead(uint16_t reg);

#endif //MWI2C_H
