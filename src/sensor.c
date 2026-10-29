
#include "sensor.h"

int sensor_read(int channel)
{
    return 25 + channel * 5;
}
