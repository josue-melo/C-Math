#include <stdbool.h>
#include "math/basic/arithmetic.h"

float sum(float n1, float n2)
{
    return n1 + n2;
}

float subtract(float n1, float n2)
{
    return n1 - n2;
}

float multiply(float n1, float n2)
{
    return n1 * n2;
}

bool divide(float n1, float n2, float *result)
{
    if (n2 == 0)
        return false;

    *result = n1 / n2;
    return true;
}

float power(float n, int exp)
{
    bool isNegative = false;

    if (exp < 0)
    {
        isNegative = true;
        exp *= -1;
    }

    float result = 1;

    for (int i = 0; i < exp; i++)
    {
        result *= n;
    }

    return isNegative ? 1 / result : result;
}

bool sqroot(float n, float *result)
{
    if (n < 0)
        return false;

    if (n == 0)
    {
        *result = 0;
        return true;
    }

    double x = n;
    double raiz;

    for (int i = 0; i < 10; i++)
    {
        raiz = 0.5 * (x + n / x);
        x = raiz;
    }

    *result = raiz;
    return true;
}