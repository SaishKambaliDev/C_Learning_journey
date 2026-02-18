#include <stdio.h>
int main()
{
    int ages[] = {25, 45, 89, 78, 45, 47};  //no need to declare array size when you initialize becuase compiler calculates it
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    int max_age = ages[0];

    for(int i = 1; i < length; i++)
    {
        if(max_age < ages[i])
        {
            max_age = ages[i];
        }    
    }

    printf("The maximum age in given array is: %d", max_age);

}