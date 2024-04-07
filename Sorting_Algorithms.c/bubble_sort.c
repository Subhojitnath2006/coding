// BUBBLE SORT

// n elements in the array---> maximum n-1 passes.
// after every pass we need to apply bubble sort on the unsorted elements only and we do not need to check the 'largest'

// for bubble short we have to use nested loops
// Outer loop---> is for no of passes
// inner loops---> is for swapping two no if the first element is greater than the second element.

/*#include <stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d", &n);
    int arr[n];

    // taking input of an array
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", arr[i]);
    }

    // sorting of the array
    int temp;
    for (int j = (n - 1); j > 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // printing the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
*/


// maximum no of swaps in worst case in bubble sort

// if size of array is n then no of swaps is
// n-1 + n-2 + n-3 +............3+2+1= n(n-1)/2


//optimization of bubble sort in the case of nearly sorted array

// check if array after every pass is already sorted or not

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d", &n);
    int arr[n];

    // taking input of an array
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", arr[i]);
    }
    bool flag= true;
    // sorting of the array
    int temp;
    for (int j = (n - 1); j > 0; j--)
    
    {
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag= false;
            }
        }
        if(flag==true) break;
    }

    // printing the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}


// is bubble sort stable? --->yes
