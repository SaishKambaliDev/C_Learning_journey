#include <stdio.h>

int main()
{
    int age = 19;     //age of personn A
    int minAge = 18;  //minimum age for election voting

    int isAllowed = age >= minAge; //this stores if he is eligible to be vote
    if(isAllowed == 1)
    {
        printf(" Yes eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
    return 0;
}