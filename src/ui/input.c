#include <stdbool.h>
#include <stdio.h>

#include "ui/input.h"

#define MAX_COUNT 100

void clearBuffer()
{
    while (getchar() != '\n');
}

int selectOption(int maxOption)
{
    int option;
    int result;

    do
    {
        printf("Escolha uma opção: ");
        result = scanf("%d", &option);

        if (result != 1)
        {
            printf("Entrada inválida!\n");
            clearBuffer();
            continue;
        }

        if (option < 0 || option > maxOption)
        {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (option < 0 || option > maxOption);

    clearBuffer();

    return option;
}

float getNumber(const char *msg)
{
    float num;
    int result;

    do
    {
        printf("%s", msg);
        result = scanf("%f", &num);

        if (result != 1)
        {
            printf("Entrada inválida!\n");
            clearBuffer();
        }

    } while (result != 1);

    clearBuffer();

    return num;
}

void getTwoNumbers(float *a, float *b)
{
    *a = getNumber("Digite o primeiro número: ");
    *b = getNumber("Digite o segundo numero: ");
}

int getArrayValues(float *arr)
{
    int count = 0;
    int wantContinue = 1;

    while (wantContinue && count < MAX_COUNT)
    {
        arr[count] = getNumber("Adicione um valor: ");
        count++;

        wantContinue = (int)getNumber("Quer continuar? [1 - Sim | 0 - Não]: ");
    }

    return count;
}