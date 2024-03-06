#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[8] = {9, 4, 5, 3, 5, 45, 23, 56};
    int max = INT_MIN;
    int smax = INT_MIN;
    // for(int i=1;i<=7;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    // for(int i=1;i<=7;i++){
    //     if(arr[i]!= max && smax<arr[i]){
    //         smax=arr[i];
    //     }
    // }

    // another method

    for (int i = 1; i <= 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is now previous max
            max = arr[i]; // max is now a new max
        }
        else if (smax < arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d \n", max);
    printf("%d \n", smax);
    return 0;
}