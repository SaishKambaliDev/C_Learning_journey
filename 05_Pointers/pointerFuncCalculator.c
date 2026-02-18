#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{

    int x = 0, y = 0;
    int choice = 0;
    int result = 0;
    int (*pointerCal[3])(int, int) = {add, subtract, multiply};

    while(1)
    {
    printf("Enter the choice: \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4.Exit\n");
    scanf("%d", &choice);

    if(choice == 4) return 0;


    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    if(choice >= 1 && choice <= 3)
    {
        result = pointerCal[choice-1](x, y);
        printf("\nResult is: %d\n", result);
    }
    else
    {
        printf("Enter valid choice");
    }
    }

    return 0;
}