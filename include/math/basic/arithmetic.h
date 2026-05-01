#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include <stdbool.h>

float sum (float n1, float n2);
float subtract (float n1, float n2);
float multiply (float n1, float n2);
bool divide(float n1, float n2, float *result);
float power (float n, int exp);
bool sqroot(float n, float *result);


#endif