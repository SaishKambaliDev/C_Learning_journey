#include <stdio.h>

void sayhello()
{
    printf("Hello, this is inside callback function\n");
}

void callbackfunction(void (*callback)()){

    printf("This is before calling callback\n");
    callback();
    printf("This is after calling callback function\n");
}

int main()
{
    callbackfunction(sayhello);
    return 0;
}