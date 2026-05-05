#include <stdbool.h>
#include <stdio.h>

#include "math/basic/statistic.h"
#include "algorithms/sort.h"

#define MAX_VALUE 100

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

// Mediana
float median(const float values[], const int count)
{
    float copyValues[MAX_VALUE];

    for (int i = 0; i < count; i++)
    {
        copyValues[i] = values[i];
    }

    sort(copyValues, count);

    if (count % 2 == 0)
    {
        return average(copyValues[count / 2 - 1], copyValues[count / 2]);
    }
    else
    {
        return copyValues[count / 2];
    }
}
