#include <stdbool.h>
#include <stdio.h>

#include "math/basic/statistic.h"

// Medias
float average (const float value1, const float value2)
{
    return (value1 + value2) / 2;
}

float arrayAverage (const float values[], const int count)
{
    if (count == 0) return 0;

    float total = 0;

    for (int i = 0; i < count; i++)
    {
        total += values[i];
    }

    return total / count;
}
