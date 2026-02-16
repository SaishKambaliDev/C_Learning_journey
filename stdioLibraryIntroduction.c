#include <stdio.h>

int main()
{
    //stdio library funnctions

    /*fclose() closes a file*/

    /*feof() returns a true value when the position indiacator has reached the end of the line*/

    /*
    FILE *fp = fopen("data.txt", "r");
    int x;

    while(fscanf(fp, "%d", &x ) == 1)
    {
        printf("%d\n",x);
    }
        
    if(feof(fp))
    {
    printf("Reached end of file\n");
    }
    
    ferror() - returns a true value if a recent file operation has an error
    
    fgetc() return the ASCII value of a character in a file and advances the position inndicator
    fgetc(File *stream)

    fgets() function reads content from the file up to the next line break and wites 
    it into a char array. A \0 null terminating character is appended to the end of the content. The position 
    indicator is moved to the next unread character in the file.
    
    fgets(char *destination, int size, FILE *ptr);

    fopen()opens a file

    fprintf(fptr, "Some text"); writes some text in a file pointer
    %[flags][width][.precision][length]specifier.

    flags-
    - - Makes the output left-justified by adding any padding spaces to the right instead of to the left
    # - shows an alternate representation of the formatted data depending on the conversion
    + - causes positive number to be always prefixed with +
      - this prefixes a space to positive numbers, primarily so that digits can be lined up with the digits of negative numbers.
    0 - pads number with zeros on the left
    
    fputc() functionn writes a single character to a file and moves 
    the position indicator forward by one character
    fputc(int c, FILE *fptr);
    here a character can be also be passed instead of ASCII value

    fputs() function writes a string into a file
    fputs(const char *str, FILE *fptr);

    fread() function reads data from a file and writes into a block of memory
    fread(void *destination, size_t size, size_t amount, FILE *fptr)

    char output[50];
    fscanf(fptr, "%49s", output) function reads formatted data from a file and writes it into memory locations specified by  the arguments, then 
    moves the position indicator  to the  file position where it stopped reading.

    %[*][width][length]specifier

    fseek() function moves the position indicator to a specified position in the file
    fseek(FILE *fptr, long int offset, int origin)

    origin can have three value:-
    SEEK_SET - offset is relative to the beginning of the file
    SEEK_CUR - offset is relative to the current position in the file
    SEEK_END - Offset is relative to the end of the file

    ftell() function returns the value of position indicator. this is the position in the file where the next read or write operation will be done.

    ftell(fptr);  returns an int value

    fwrite() function writes data from a block of memory into a file
    fwrite(const void* source, size_t size, size_t amount, FILE *fptr);

    size - the  size of an element of the block of the memory
    amount - the number of elements to read from the block of memory
    and write into the file

    returns a size_t value representing the number of elements that were written into the file

    getc() the same as fgetc()

    getchar() reads one character of user input and returns its ASCII value

    printf(); prints a formated string to the console

    putc() same as fputc()

    putchar(int c) outputs a single charcter to the console

    puts() outputs a string to the  console

    remove() deletes a file; returned zero if removed successsfully

    rename() function changes the name of a file. if the operating system supports it this 
    function can also be used to move a file to a different directory.
    rename("oldname", "rename");

    rewind() function moves the position indicator to the beginning of the file
    rewinf(FILE *fptr);

    scanf() reads formatted data from user input and writes it into a number of memory locations

    snprintf() writes a formatted string into a char array
    char destination[50];

    snprintf(destination, 50, "Hello %s!", "World");

    sprintf() same as above but does not account size of destination array which is not memory safe

    sprintf(destination, "Hello %s!", "World");

    sscanf() function reads data from a char array and writes it into memory locations specified by the arguments

    char number[] = "24 Hours";
    int num;
    sscanf(number, "%d", &num);

        */
}