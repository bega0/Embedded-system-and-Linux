
#include "sensor.h"

int sensor_read(int channel)
{
    return 25 + channel * 5;


}// 传感器取值函数
