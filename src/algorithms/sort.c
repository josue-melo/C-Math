#include <stdio.h>

#include "algorithms/sort.h"

void sort(float arr[], const int count)
{
    int i, j;
    float temp;
    
    for (i = 1; i < count; i++) 
    {
        temp = arr[i]; 
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = temp;
    }
}