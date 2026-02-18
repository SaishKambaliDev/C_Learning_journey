#include <stdio.h>
int main()
{
    int number = 12345;
    int revnumber = 0;

    while(number)
    {
        revnumber = revnumber * 10 + number % 10;
        number  /= 10;
    }
    printf("%d", revnumber);
    return 0;
}
