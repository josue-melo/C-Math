#include <stdio.h>
#include "ui/input.h"

int selectOption(int maxOption)
{
    int option;

    do
    {
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        if (option < 0 || option > maxOption)
        {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (option < 0 || option > maxOption);

    return option;
}

float getNumber(const char *msg)
{
    float num;

    printf("%s", msg);
    int result = scanf("%f", &num);

    return num;
}

void getTwoNumbers(float *a, float *b)
{
    *a = getNumber("Digite o primeiro número: ");
    *b = getNumber("Digite o segundo numero: ");
}