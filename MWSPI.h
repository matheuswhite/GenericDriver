#ifndef MWSPI_H
#define MWSPI_H

#include "MWDriver.h"

void MWSPIInit(MWDriver* driver) {
        driver.open = MWSPIOpen;
        driver.close = MWSPIClose;
        driver.write = MWSPIWrite;
        driver.read = MWSPIRead;
}

void MWSPIOpen(uint8_t addr);
void MWSPIClose();
void MWSPIWrite(uint16_t reg, uint8_t data);
uint8_t MWSPIRead(uint16_t reg);

#endif //MWSPI_H
