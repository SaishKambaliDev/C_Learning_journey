#include <stdio.h>
int main()
{
    int number = 100;
    int *numptr = &number;

    printf("%p", numptr);
}