#include <stdio.h>

#include "math/basic/percentage.h"

float percentage (const float value, const float percent)
{
    return value * (percent / 100);
}

float percentageIncrease (const float value, const float percent)
{
    return value + value * (percent / 100);
}

float percentageDecrease (const float value, const float percent)
{
    return value - value * (percent / 100);
}
