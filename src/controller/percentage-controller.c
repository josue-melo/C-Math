#include <stdbool.h>
#include <stdio.h>

#include "ui/input.h"
#include "ui/menu.h"
#include "controller/percentage-controller.h"
#include "math/basic/percentage.h"

#define PERCENTAGE_OPTIONS 3

void getPercentage(float *value, float *percent)
{
    *value = getNumber("Digite o valor: ");
    *percent = getNumber("Digite a porcentagem (ex: 10 para 10%%): ");
}

bool percentageOperations(void)
{
    while (true)
    {
        showPorcentage();

        int option = selectOption(PERCENTAGE_OPTIONS);

        if (option == 0) return false;

        float value, percent, result;

        switch (option)
        {
            case 1:
            {
                getPercentage(&value, &percent);
                result = percentage(value, percent);
                printf("Resultado: %.2f\n", result);
                break;
            }
            case 2:
            {
                getPercentage(&value, &percent);
                result = percentageIncrease(value, percent);
                printf("Resultado: %.2f\n", result);
                break;
            }
            case 3:
            {
                getPercentage(&value, &percent);
                result = percentageDecrease(value, percent);
                printf("Resultado: %.2f\n", result);
                break;
            }
            default:
            {
                printf("Opção inválida!\n");
            }
        }
    }
}
