

// no of passes--> n-1 if no of elements is n
//  in each pass we find out the minimum element in the unsorted part
//  after every pass unsorted array reduces by 1 length
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main()
{
    int arr[7] = {7, 4, 5, 9,8, 2, 1};
    int n = 7;
    printf("unsorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // selection sort

    for (int i = 0; i < n - 1; i++)
    { // n-1 passes
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        { // finding min element in the given array
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        // swap the min and first element of unsorted part
        // swap minidx and i
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    // printing the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("Sorted array\n");
        printf("%d ", arr[i]);
    }

    return 0;
}

//is selection sort stable?---> no