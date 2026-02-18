#include <stdio.h>

int main()
{
    int numbers[] = {23, -45, 89, -78, 45, 0, 14, 5};   
    
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < length; i++)  
    {
        if(numbers[i] < 0)    //avoiding negative numbers
        {
            continue;
        }
        else if(numbers[i] == 0)    //exiting loop if zero encountered
        {
            break;
        }
        
            printf("%d\n", numbers[i]);  //printing only postive numbers
    }
}