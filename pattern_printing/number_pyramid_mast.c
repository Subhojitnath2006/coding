#include <stdio.h>
int main()
{

    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 1; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= (i - 1); k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
