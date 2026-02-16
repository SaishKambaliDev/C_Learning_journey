#include <stdio.h>
#include <time.h>

int main()
{
    /*time() gives the current time as a number*/
    time_t now = time(NULL);

    /*localtime() converts  time_t into local time and date*/
    //struct tm *t = localtime(&now);

    //gmtime() converts the time number into world standard time
    struct tm *t = gmtime(&now)

    /*ctime() converts time_t into a readable string*/

    printf("\n%s\n", ctime(&now));

    /*converts tsruct tm into readable string*/

    printf("%s\n", asctime(t));

    //strftime() formats the time in the way we want

    char buf[50];
    strftime(buf, sizeof(buf), "%d-%m-%Y %H:%M:%S", t);

    //difftime() finds the difference between the two times
      
    //double diff = difftime(time2, time1);

    //It  returns outputs in seconds

    //mktime() it converts struct tm into time_t

    /*clock() measures CPU time used by program
    
    clock_t statrt = clock();
    
    clock_t end = clock();
    
    doubble time_spent = (double)(end-start) / CLOCKS_PER_SEC;*/

    return 0;
}