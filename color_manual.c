#include "color_conversion.h"
#include <stdio.h>

void PrintColorCodingManual(void) {
    printf("Color Coding Manual:\n");
    for (int major = 0; major < numberOfMajorColors; major++) {
        for (int minor = 0; minor < numberOfMinorColors; minor++) {
            ColorPair colorPair;
            colorPair.majorColor = (enum MajorColor)major;
            colorPair.minorColor = (enum MinorColor)minor;
            int pairNumber = GetPairNumberFromColor(&colorPair);
            printf("Pair Number: %d, Color: %s %s\n",
                pairNumber,
                MajorColorNames[major],
                MinorColorNames[minor]);
        }
    }
}
