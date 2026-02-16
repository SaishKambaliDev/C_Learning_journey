#include <stdio.h>

enum class{
      Good,
      Excellent,
      Best
};

int main()
{
    //an enum is a special type that represents a group of constants (unchangeable values)
    enum class C1;
    C1 = Excellent;
    printf("%d", C1);

    return 0;

}