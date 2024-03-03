#include <stdio.h>
int main()
{

    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    int nsp = n / 2;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= (n/2)+1)
        {
            for (int j = 1; j < nsp; j++)
            { // spaces
                printf("  ");
            }
            for (int k = 1; k <= n; k++)
            { // stars
                printf("*");
                
            }
            nsp--;
            nst+=2;
        }
        else{
           for (int j = 1; j < nsp; j++)
            { // spaces
                printf("  ");
            }
            for (int k = 1; k <= n; k++)
            { // stars
                printf("*");
                
            } 
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}
