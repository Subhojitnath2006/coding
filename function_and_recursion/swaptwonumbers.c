#include <stdio.h>
int main()
{
    // swap two numbers using a third variable.
    int n;
    printf("enter a munber n: ");
    scanf("%d", &n);
    int m;
    printf("enter a munber m: ");
    scanf("%d", &m);
    int temp;
    temp = n;
    n = m;
    m = temp;
    printf("the value of n is: %d \n", n);
    printf("the value of m is: %d \n", m);

    // swap two numbers without using a third variable.

    int a;
    printf("enter a munber a: ");
    scanf("%d", &a);
    int b;
    printf("enter a munber b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the value of a is: %d \n", a);
    printf("the value of b is: %d \n", b);

    return 0;
}