#include <stdio.h>
 void add()
 {
    printf("Addition\n");
 }

 void Subtract()
 {
    printf("Subtract\n");
 }

 void Multiply()
 {
    printf("Multiplication\n");
 }

 int main()
 {
    void (*operations[3])() = {add, Subtract, Multiply};

    for(int i = 0; i < 3; i++)
    {
        operations[i]();
    }

    return 0;
 }