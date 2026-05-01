#include <stdbool.h>
#include <stdio.h>

#include "math/basic.h"
#include "controller/basic-controller.h"
#include "ui/input.h"
#include "ui/menu.h"

#define INIT_CALC_OPTIONS 1
#define BASIC_OPTIONS 1
#define ARITHMETIC_OPTIONS 6

bool ArithmeticOperations(void)
{
    while (true)
    {
        showArithmeticOperations();
        int option = selectOption(ARITHMETIC_OPTIONS);

        if (option == 0)
            return false;

        switch (option)
        {
        case 1:
        {
            float a = getNumber("Digite o primeiro numero: ");
            float b = getNumber("Digite o segundo numero: ");

            float result = sum(a, b);
            printf("O resultado da soma é: %.2f\n", result);
            break;
        }

        case 2:
        {
            float a = getNumber("Digite o primeiro numero: ");
            float b = getNumber("Digite o segundo numero: ");

            float result = subtract(a, b);
            printf("O resultado da subtracao é: %.2f\n", result);
            break;
        }

        case 3:
        {
            float a = getNumber("Digite o primeiro numero: ");
            float b = getNumber("Digite o segundo numero: ");

            float result = multiply(a, b);
            printf("O resultado da multiplicacao é: %.2f\n", result);
            break;
        }

        case 4:
        {
            float a = getNumber("Digite o primeiro numero: ");
            float b = getNumber("Digite o segundo numero: ");

            if (b == 0)
            {
                printf("Nao é possivel dividir por zero!\n");
                break;
            }

            float result = divide(a, b);
            printf("O resultado da divisao é: %.2f\n", result);
            break;
        }

        case 5:
        {
            float num = getNumber("Digite o numero: ");
            int exp = (int)getNumber("Digite o expoente: ");

            float result = power(num, exp);
            printf("O resultado da potencia é: %.2f\n", result);
            break;
        }

        case 6:
        {
            float num = getNumber("Digite o numero: ");

            if (num < 0)
            {
                printf("Nao existe raiz real de numero negativo!\n");
                break;
            }

            float result = sqroot(num);
            printf("O resultado da raiz quadrada é: %.2f\n", result);
            break;
        }

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
}

bool basicMath(void)
{
    while (true)
    {
        showBasicMath();
        int option = selectOption(BASIC_OPTIONS);

        if (option == 0)
            return false;

        if (option == 1)
        {
            ArithmeticOperations();
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
        {
            basicMath();
        }
    }
}