#include <stdio.h>
int main()
{

    int a = 5;
    int *x = &a;         // it stores the address of a
    printf("%p \n", &a); // prints the address of a.
    printf("%p \n", &x); //%p prints the address
    printf("%p \n", x);  // prints the address of a
    printf("%p \n", *x); // prints the value corresponding to the address stored in x.

    int **y = &x;  //int* ---> int ka address store karta ha.
    // int** ---> int* ka address store karta ha.
    printf("%p \n", y);
    printf("%d \n", **y);
    return 0;
}