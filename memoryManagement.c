#include <stdio.h>
#include <stdlib.h>

struct List{

    int *data;       //points to the memory where number will be stored
    int numItems;    //stores how many items are currently inn the list
    int size;        //indicates how many items fit i the allocated memory
};


void addToList(struct List *myList, int item);

int main()
{

    struct List myList;
    int amount;
    int i, j;

    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    if(myList.data == NULL)
    {
        printf("Memory allocationn failed");
        return 1;
    }

    amount = 44;
    for(i = 0; i < amount; i++)
    {
        addToList(&myList, i+1);
    }

    for(j = 0; j < myList.numItems; j++)
    {
        printf("%d ", myList.data[j]);
    }

    free(myList.data);
    myList.data = NULL;

    return 0;
}

void addToList(struct List *myList, int item)
{
    if(myList->numItems == myList->size)
    {
        int newSize = myList->size + 10;

        int *tmp = realloc(myList->data, newSize * sizeof(int));
        if(tmp == NULL)
        {
            printf("Memory resize failed\n");
            return;
        }

        myList->data = tmp;
        myList->size = newSize;
    }

    myList->data[myList->numItems] = item;
    myList->numItems++;
}