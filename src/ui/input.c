#include <stdio.h>

#include "ui/input.h"

int selectOption(int maxOption)
{
    int option;

    do
    {
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        if (option < 0 || option > maxOption)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (option < 0 || option > maxOption);

    return option;
}

float getNumber (const char *msg)
{
    float num;

    printf("%s", msg);
    scanf("%f", &num);

    return num;
}