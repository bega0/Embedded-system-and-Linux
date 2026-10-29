
#include <stdio.h>
#include "sensor.h"

int main(void)
{
    for (int i = 0; i < 3; i++) {
        printf("通道%d: %d\n", i, sensor_read(i));
    }

    return 0;
}
