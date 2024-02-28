#include <stdio.h>
int main()
{
    // print the numbers from 0 to n, if n is given by the user.
    int n;
    printf("enter a number: ");
    scanf("%d \n", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }

    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }

    // print sum of first n natural numbers
     int a;
     printf("enter a number:");
     scanf("%d \n",&a);
     int sum=0;
     for(int i=1; i<=a; i++){
         sum=sum+i;
         if(i==a){
              printf("the sum is: %d \n",sum);
         }

    }
    for(int i=a; i>=1; i--){
        printf("%d \n",i);
    }

    // print the table of a number input by the user.
    int b;
     printf("enter a number:");
     scanf("%d \n",&b);
    int table=0;
    for(int i=1; i<=10;i++){
        table= b*i;
        printf("%d \n",table);
    }

    // keep taking numbers as input from user until user enters an odd number
    int c;

    do
    {
        printf("enter a number: ");
        scanf("%d \n", &c);
        printf("%d \n", c);
        if (c % 2 != 0)
        {
            break;
        }
    } while (1);

    printf("Thank you");

    int d;

    do
    {
        printf("enter a number: ");
        scanf("%d \n", &d);
        printf("%d \n", d);
        if (d % 2 != 0)
        {
            break;
        }
    } while (1);

    printf("Thank you");


    return 0;
}