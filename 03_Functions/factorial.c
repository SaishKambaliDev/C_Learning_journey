#include <stdio.h>
int main()
{
    //program to print factorial 
    int number;
    int fact = 1;
    printf("Enter a number to calculate factorial : ");
    scanf("%d",&number);
    for(int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("The factorial is : %d", fact);
}