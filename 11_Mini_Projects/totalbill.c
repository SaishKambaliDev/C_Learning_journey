#include <stdio.h>

int main()
{
    int items = 10;
    float cost_per_item = 0.5;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Total cost is  = %.2f %c", total_cost, currency);
}