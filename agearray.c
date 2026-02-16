#include <stdio.h>
int main()
{
    int ages[] = {22, 56, 48, 78, 89, 45, 45};
    float avg, sum = 0;

    int length = sizeof(ages) / sizeof(ages[0]);

    for(int i = 0; i < length; i++)
    {
        sum += ages[i];
    }

    printf("The sum of their ages is : %.2f\n", sum);

    avg = (float) sum / length;

    printf("The average of their  ages is : %.2f", avg);

    return 0;
}