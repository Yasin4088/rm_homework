#include "factorial.h"
long long calculate(int number)
{
    if (number == 0 || number == 1)
        return 1;
    else
        return number * calculate(number - 1);
}