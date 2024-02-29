// sum of first n natural numbers.

// #include <stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     printf("enter any number:");
//     scanf("%d \n",&n);
//     sum(n);
//     return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 0;
//     }
//     int sumNm1= sum(n-1); //sum of 1 to (n-1)
//     int sumN= sumNm1+n;
//     return sumN;
// }

// factorial of n

// #include <stdio.h>
// int factorial(int n);
// int main(){
//     printf("the factorial is: %d \n",factorial(5));
//     return 0;
// }
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     int factNm1= factorial(n-1);
//     int factN= factNm1*n;
//     return factN;
// }

// write a function to print n terma of fibinacci series.

#include <stdio.h>
int fib(int n);
int main()
{
    printf("%d \n", fib(10));
}

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    //    printf("fib of %d is %d \n",fibN);
    return fibN;
}