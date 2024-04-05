#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]== arr[j]){
    //             printf("%d is duplicate element",arr[i]);
    //             break;
    //         }
    //     }
    // }

    // method 2
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int sn = (n * (n + 1)) / 2;
    printf("the duplicate no is: %d", sum - sn);
    return 0;
}