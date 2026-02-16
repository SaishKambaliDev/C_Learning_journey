#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    ptr = calloc(4, sizeof(int));

    *ptr = 1;
    ptr[2] = 2;
    ptr[3] = 3;

    printf("%d \n", *ptr);
    printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

    return 0;

}