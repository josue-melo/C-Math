#include <stdbool.h>
#include <stdio.h>

#include "math//basic/arithmetic.h"

// Controler
#include "controller/arithmetic-controller.h"
#include "controller/basic-controller.h"
#include "controller/percentage-controller.h"
#include "controller/statistic-controller.h"

// UI
#include "ui/input.h"
#include "ui/menu.h"

#define INIT_CALC_OPTIONS 1
#define BASIC_OPTIONS 3


bool basicMath(void)
{
    while (true)
    {
        showBasicMath();
        int option = selectOption(BASIC_OPTIONS);

        if (option == 0)
            return false;

        switch (option)
        {
            case 1:
                ArithmeticOperations();
                break;
            case 2:
                percentageOperations();
                break;
            case 3:
                statisticOperations();
                break;
            default:
                printf("Opção invalida!\n");
        }
    }
}

bool initCalc(void)
{
    while (true)
    {
        showMenu();
        int option = selectOption(INIT_CALC_OPTIONS);

        if (option == 0)
            return false;

        if (option == 1)
            basicMath();
    }
}