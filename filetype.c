#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    fprintf(fptr, "Hello World\n This is the second line\n This is the third line");



    fclose(fptr);
}