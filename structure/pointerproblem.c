#include <stdio.h>
typedef int *int_pointer;
int main()
{

    // int x=5, y=7;
    // int* x,y;  // means int*x and int y
    // doesn't means int*x and int*y

    // solving this problem using typedef

    int x = 5, y = 7;
    int_pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);

    return 0;
}