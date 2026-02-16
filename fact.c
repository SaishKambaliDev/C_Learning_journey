#include <stdio.h>

int factorial(int k);

int main()
{
    int factans = factorial(5);
    printf("%d\n", factans);
    return 0;
}

int factorial(int k)
{
    if(k > 0)
    {
    return k * factorial(k-1);
    }
    else
    {
        return 1;
    }
}