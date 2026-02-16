#include <stdio.h>
int main()
{
    int num = 10;
    int *numptr = &num;
    int **doubnumptr = &numptr;

    printf("Num is %d\n", num);
    printf("Num ptr is %d\n",  *numptr);
    printf("Double num ptr is: %d\n", **doubnumptr);

}