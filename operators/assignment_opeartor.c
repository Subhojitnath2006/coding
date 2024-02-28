#include <stdio.h>
#include <math.h>
int main()
{

    int A = 1;
    int b = 2;
    // a=a+b;
    // a+=b;
    //  a*=b;
    //  a-=b;
    //  a/=b;
    //  a%=b;
    // printf("%d \n", a);

    // questions on opeartors
    // write a program to check if a number is divisible by 2 or not
    int a;
    printf("enter the value of a: ");
    scanf("%d \n", &a);
    printf("%d \n", a % 2 == 0);
    return 0;
}