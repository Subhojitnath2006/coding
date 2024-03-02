#include <stdio.h>
int main()
{

    int n;
    printf("enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", ((2 * j) - 1));
        }
        printf("\n");
    }
    return 0;
}