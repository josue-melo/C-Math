#include <stdio.h>

#include "ui/menu.h"

// UI basica
void showMenu(void)
{
    printf("---------- MENU ----------\n");
    printf("\n");
    printf("1 - Matematica Basica\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("--------------------------\n");
}

// Matematica basica

void showBasicMath(void)
{
    printf("---------- Matematica Basica ----------\n");
    printf("\n");
    printf("1 - Operações Aritimeticas\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("---------------------------------------\n");
}

void showArithmeticOperations(void)
{
    printf("---------- Operações Aritméticas ----------\n");
    printf("\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Potenciação\n");
    printf("6 - Raiz quadrada\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("-------------------------------------------\n");
}