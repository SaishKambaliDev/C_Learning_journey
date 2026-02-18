#include <stdio.h>
#include <string.h>
#include <locale.h>  //used for strcoll() function

int main()
{
    //all string library functions

    //memchr() to get a pointer to the first byte in the memory of the specified value
    char myStr[] = "Hello World!";
    char *strptr = (char*)memchr(myStr, 'o', 12);

    if(strptr == NULL)
    {
        printf("Pointer creation failed\n");
        return 1;
    }

    printf("%c\n", *strptr);

    /*memcmp() compares two strings and written an integer value indicating which one is the greatest string 
    if returnn positive than first string is positive,
    if return negative then second strinng is greater,
    or return 0 if both are same*/

    char str1[] = "ABCD";
    char str2[] = "ABCE";
    int cmp = memcmp(str1, str2, 4);

    if(cmp > 0)
    {
        printf("%s is greater than %s\n", str1, str2);
    }
    else if(cmp < 0)
    {
        printf("%s is greater than %s\n", str2, str1);
    }
    else
    {
        printf("Both strings are equal\n");
    }

    //memcpy() copies fixed numnber of bytes from one memory location to another
    //no overlap required

    char str[] = {1, 2, 3, 4, 5};
    char dest[5];

    memcpy(dest, str, 5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", dest[i]);
    }

    

    /* memmove() it is same as memcpy() but it handles the overlapping memory efficiently
     if same memory block then it starts backwards automatically*/  
     
    char memmoveStr[] = "ABCDE";
    memmove(memmoveStr + 1, memmoveStr, 4);
    printf("\n%s\n", memmoveStr);

    /*memset() sets each byte of the memory to the same value
    it works at the byte level and not element by element*/

    int memarr[5];

    memset(memarr, 0, sizeof(memarr));

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", memarr[i]);
    }

    /* strcat() concates the string to a destinationn string*/

    char destStr[20] = "Hello";
    strcat(destStr, " World!");
    printf("\n%s\n", destStr);

    /*strchr() returns a pointer to the first occurence of a character in a string*/
    char chrStr[] = "Hello World!";
    char *chrstrPtr = strchr(chrStr, 'W');
    if(chrstrPtr != NULL)
    {
        printf("%s\n", chrstrPtr);
    }

    /*strcmp() return an integer value depending on which of the two strings is greater*/
    char strcmpStr1[] = "ABCD";
    char strcmpStr2[] = "ABCE";
    int strcmpRes = strcmp(strcmpStr1, strcmpStr2);
    if(strcmpRes > 0)
    {
        printf("%s is greater than %s\n", strcmpStr1, strcmpStr2);
    }
    else if(strcmpRes < 0)
    {
        printf("%s is greater than %s\n", strcmpStr2, strcmpStr1);
    }
    else if(strcmpRes == 0)
    {
        printf("%s is equal to %s", strcmpStr1, strcmpStr2);
    }
    else
    {
        return 0;
    }

    /*strcoll() compares two strings using current locale's collation rules and not raw ASCII values*/
    setlocale(LC_COLLATE, "");
    printf("%d\n", strcoll("ä", "z"));

    /*strcpy() copies string from one string to the another*/
    char  strcpyStr1[] = "Hello World!";
    char strcpyStr2[20];
    strcpy(strcpyStr2, strcpyStr1);
    printf("\n%s\n", strcpyStr1);
    printf("\n%s\n", strcpyStr2);

    /*strcspn() function returns the length of a string upto the specified set of characters in a string if 
    it does not found a specified character it returns the string*/

    char strcspnStr[] = "Hello World!";
    int strcspnLen = strcspn(strcspnStr, ",.!");
    printf("The specified first occurence of given was found at %d\n", strcspnLen);

    /*strerror() returns a pointer to a string specifying the meaning of a error code*/
    printf("%s\n", strerror(0));
    printf("%s\n", strerror(1));
    printf("%s\n", strerror(2));
    printf("%s\n", strerror(3));

    /*strlen() returns the length of a string specifying the length of a string 
    it is different from the actual size allocated for that string*/

    char strlenStr[20] = "Hello World!";
    char strlenStr2[] = "Hello World!";

    printf("%d\n", strlen(strlenStr));
    printf("%d\n", sizeof(strlenStr));

    printf("%d\n", strlen(strlenStr2));
    printf("%d\n", sizeof(strlenStr2));

    /*strncat() concatenates part of  a string to another string with number specifiying the length of the string to be concatenated,
    to concatenate the entire string we must use the strcat() function*/

    char strncatStr[] = "Hello";
    strncat(strncatStr, " World!", 5);
    printf("%s\n", strncatStr);

    /*strncmp() compares the first n characters of both the strings and returns an integer indicating which one is the 
    greatest.*/
    
    char strncmpStr1[] = "Hello";
    char strncmpStr2[] = "Heap";
    int strncmpRes = strncmp(strncmpStr1, strncmpStr2, 4);

    if(strncmpRes > 0)
    {
        printf("%s is greater than %s\n", strncmpStr1, strncmpStr2);
    }
    else if(strncmpRes < 0)
    {
        printf("%s is greater than %s\n", strncmpStr2, strncmpStr1);
    }
    else if(strncmpRes == 0)
    {
        printf("Both strings are the same\n");
    }
    else
    {
        return 1;
    }

    /*strncpy() funnctionn copies first n character from one string to the another string*/
    char strncpyStr1[] = "Hello World!";
    char strncpyStr2[] = "This is C programming";
    strncpy(strncpyStr2,  strncpyStr1, 6);
    printf("%s\n", strncpyStr2);
    printf("%s\n", strncpyStr1);

    /*strpbrk() searches for a first occurence of any particular specified character from the string and returs a 
    pointer to the position of the character in the string*/
    char strpbrkStr[] = "This string is 146 bytes long";
    char *strbrkptr = strpbrk(strpbrkStr, "0123456789");
    if(strpbrkStr != NULL)
    {
        printf("%s", strbrkptr);
    }

    /*strrchr() returns a pointer to the last occurence of a specified character from a string*/
    char strrchrStr1[] = "Hello World";
    char strrchrStr2[] = "Hello World";
    char *strrchrPtr = strchr(strrchrStr1, 'o');
    char *strrchrPtr1 = strrchr(strrchrStr2, 'o');
    if(strrchrPtr != NULL)
    {
        printf("\n%s\n", strrchrPtr);
    }
    if(strrchrPtr1 != NULL)
    {
        printf("\n%s\n", strrchrPtr1);
    }

    /*strspn() seraches for the first character in the string that does not match with any of the string from the specified characters list
    and return the length of the string upto that character*/
    char strspnStr[] = "4097 Hello World";
    int posstrspn = strspn(strspnStr, "0123456789");
    printf("%d\n", posstrspn);

    /*strstr() return a pointer to the first occurence of a string in another string*/
    char strstrStr[] = "The rain is falling heavily from midnight";
    char *strstrPtr = strstr(strstrStr, "ain");
    if(strstrPtr != NULL)
    {
        printf("%s\n", strstrPtr);
    }

    /*strtok() splits a given string into tokens using delimiters*/
    char strtokStr[] = "Learning cpp easily";
    char *strtokPtr = strtok(strtokStr, " ");
    while(strtokPtr != NULL)
    {
        printf("%s\n", strtokPtr);
        strtokPtr = strtok(NULL, " ");
    }

    /*strxfrm() transforms a string from ASCII encoding to encoding of current locale*/
    char s1[] = "ä";
    char s2[] = "z";

    char t1[20];
    char t2[20];

    strxfrm(t1, s1, sizeof(t1));
    strxfrm(t2, s2, sizeof(t2));

    int results = strcmp(t1, t2);

    if(results > 0)
    {
        printf("%s is  greater than %s\n", t1, t2);

    }
    else if(results < 0)
    {
        printf("%s is greater than %s\n", t2, t1);
    }
    else if(results == 0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        return 1;
    }

    /*end of strings functions learning*/
} 