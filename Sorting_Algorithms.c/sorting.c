#include <stdio.h>
int main()
{

    // sorting---> put in ascending order

    // sort in descending order--> put in descending order
    //  sort in ascending order---> put in ascending order
    int target;
    scanf("%d", &target);
    int arr[10] = {1, 3, 4, 5, 6, 7, 9, 23, 45, 78};
    int i = 0;
    int j = 9;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("the elements are %d %d", arr[i], arr[j]);
        }
        if (arr[i] + arr[j] > target)
        {
            j--; // to decrease
        }
        if (arr[i] + arr[j] < target)
        {
            i++; // to increase
        }
    }

    return 0;
}