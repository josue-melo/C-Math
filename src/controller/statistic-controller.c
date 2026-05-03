#include <stdbool.h>
#include <stdio.h>

#include "ui/input.h"
#include "ui/menu.h"
#include "math/basic/statistic.h"
#include "controller/statistic-controller.h"

#define STATISTIC_OPTIONS 2
#define MAX_COUNT 100

bool statisticOperations (void)
{
    while (true)
    {
        showStatistic();

        int option = selectOption(STATISTIC_OPTIONS);

        if (option == 0) return false;

        switch (option)
        {
        case 1:
        {
            float value1, value2, result;
            getTwoNumbers(&value1, &value2);

            result = average(value1, value2);
            printf("A média é: %.2f\n", result);

            break;
        }
        case 2:
        {
            float values[MAX_COUNT];

            int count = getArrayValues(values);

            float result = arrayAverage(values, count);

            printf("A média é: %.2f\n", result);

            break;
        }
        default:
            printf("Opção invalida!\n");
            break;
        }
    }
    
}