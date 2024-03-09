#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("the no of rows:");
    scanf("%d", &n);

    int m;
    printf("the no of columns:");
    scanf("%d", &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = INT_MIN;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
            if (max < sum)
            {
                max = sum;
                return max, i;
            }
        }
    }
    printf("the row no %d has maximum sum and the sum is: %d\n", i, max);
    return 0;
}
