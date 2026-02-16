#include <stdio.h>

int main()
{
    float length = 10.0;
    float breadth = 12.0;
    float area;

    area = length * breadth; //it  is convenient to store the  calculated result first in avariable and then used it

    //print the area
    printf("The length = %.2f\n", length);
    printf("The  breadth = %.2f\n", breadth);
    printf("The area = %.2f", area);
}