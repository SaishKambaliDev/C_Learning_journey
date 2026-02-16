#include <stdio.h>
#include <time.h>

int main()
{
    time_t currenttime;
    time(&currenttime);

    printf("Current time is: %s", ctime(&currenttime));
}