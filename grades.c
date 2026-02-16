#include <stdio.h>
int main()
{
    
    char grade = 'A';
    switch(grade)
    {
        case 'A':
        case 'B':
        case 'C':
             printf("You are Pass\n");
             break;
        case 'D':
        case 'E':
        case 'F':
            printf("You are fail\n");
            break;
        default:
            printf("Enter valid grades");
        
    }
}