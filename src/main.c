#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <windows.h>

#include "math/basic.h"
#include "controller/basic-controller.h"
#include "ui/input.h"
#include "ui/menu.h"

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    while (initCalc());
    return 0;
}