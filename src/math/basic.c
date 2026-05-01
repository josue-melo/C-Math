#include <stdio.h>
#include <stdbool.h>

#include "math/basic.h"

// Aritimetica
float sum (float n1, float n2)
{
    return n1 + n2;
}

float subtract (float n1, float n2)
{
    return n1 - n2;
}

float multiply (float n1, float n2)
{
    return n1 * n2;
}

float divide (float n1, float n2)
{
    if (n2 == 0) 
    {
    printf("Erro: divisão por zero\n");
    return 0;
    }

    return n1 / n2;
}

float power(float n, int exp)
{
    bool isNegativeExp = false;

    if (exp < 0)
    {
        isNegativeExp = true;
        exp *= -1;
    }

    float result = 1;

    for (int i = 0; i < exp; i++)
    {
        result *= n;
    }

    if (isNegativeExp)
    {
        result = 1 / result;
    }

    return result;
}

float sqroot(float n) 
{
    if (n < 0) return -1.0;
    if (n == 0) return 0;

    double x = n;
    double raiz;

    for (int i = 0; i < 10; i++) {
        raiz = 0.5 * (x + n / x);
        x = raiz;
    }
    return raiz;
}