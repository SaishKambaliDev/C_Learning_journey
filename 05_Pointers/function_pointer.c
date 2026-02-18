#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*ptr)(int, int) = add;

    int result = ptr(5, 7);
    printf("%d\n", result);
    return 0;
}