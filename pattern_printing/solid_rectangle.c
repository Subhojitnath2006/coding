#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d \n", &n);
    
    // *************............ upto n no of stars
    for (int i = 1; i <= n; i++)  //outer loop signifies no of lines/ no of rows.
    {
        for (int i = 1; i <= n; i++) //inner loop signifies no of stars in each line/ no of columns.
        {
            printf("*");
        }
        printf("\n");  //har line ke baad ek enter marne ke liye.
    }

    return 0;
}