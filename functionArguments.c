#include <stdio.h>

void addNumbers(int a, int b)
{
    printf("The addition is: %d\n", a+b);
}

void calculate(void (*callback)(int a, int b), int x, int y)
{
    callback(x, y);
}

int main()
{
    calculate(addNumbers, 5, 3);
    return 0;
}