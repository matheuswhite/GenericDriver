#ifndef MWDRIVER_H
#define MWDRIVER_H

#include <stdint.h>

typedef void (*MWOpen)(uint8_t);
typedef void (*MWClose)();
typedef void (*MWWrite)(uint16_t, uint8_t);
typedef uint8_t (*MWRead)(uint16_t);

typedef struct {
    MWOpen open;
    MWClose close;
    MWWrite write;
    MWRead read;
} MWDriver;

#endif //MWDRIVER_H
