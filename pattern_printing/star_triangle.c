#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    //output
// * * * * * * * * * *
// * * * * * * * * *
// * * * * * * * *
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
    return 0;
}