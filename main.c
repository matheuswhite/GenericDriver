#include <stdio.h>
#include "MWI2C.h"
#include "MWSPI.h"

#define ADDR 0x19

typedef enum {
    kSlop = 0x0120,
    kTap  = 0x0130,
    kDTap = 0x0140,
    kX = 0x0150,
    kY = 0x0160,
    kZ = 0x0170,
} MWAccelerometerRegister;

int main() {

    MWDriver driver;
    MWI2CInit(&driver);

    driver.open(ADDR);
    driver.write(kSlop, 0x01);
    driver.write(kTap,  0x00);
    driver.write(kDTap, 0x00);
    printf("Accelaration in X: %d\n", driver.read(kX));
    printf("Accelaration in Y: %d\n", driver.read(kY));
    printf("Accelaration in Z: %d\n", driver.read(kZ));
    driver.close();

    return 0;
}
