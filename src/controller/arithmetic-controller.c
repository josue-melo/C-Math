#include <stdbool.h>
#include <stdio.h>

#include "math/basic/arithmetic.h"
#include "ui/input.h"
#include "ui/menu.h"

#define ARITHMETIC_OPTIONS 6

bool ArithmeticOperations(void)
{
    while (true)
    {
        showArithmeticOperations();
        int option = selectOption(ARITHMETIC_OPTIONS);

        if (option == 0) return false;
            
        float num1, num2, result;

        switch (option)
        {
        case 1:
            getTwoNumbers(&num1, &num2);
            result = sum(num1, num2);
            printf("Resultado: %.2f\n", result);
            break;

        case 2:
            getTwoNumbers(&num1, &num2);
            result = subtract(num1, num2);
            printf("Resultado: %.2f\n", result);
            break;

        case 3:
            getTwoNumbers(&num1, &num2);
            result = multiply(num1, num2);
            printf("Resultado: %.2f\n", result);
            break;

        case 4:
            getTwoNumbers(&num1, &num2);
            if (!divide(num1, num2, &result))
                printf("Não é possivel dividir por zero!\n");
            else
                printf("Resultado: %.2f\n", result);
            break;

        case 5:
        {
            float num = getNumber("Digite o número: ");
            int exp = (int)getNumber("Digite o expoente: ");

            result = power(num, exp);
            printf("Resultado: %.2f\n", result);
            break;
        }

        case 6:
        {
            float num = getNumber("Digite o número: ");
            if (!sqroot(num, &result))
                printf("Não existe raiz real de número negativo!\n");
            else
                printf("Resultado: %.2f\n", result);
            break;
        }

        default:
            printf("Opção inválida!\n");
        }
    }
}