#include <stdio.h>
int main()
{

    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 1; j--) // spaces ke liye loop
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) // simple number triangle
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= (i - 1); k++) //extra things ke liye loop
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
