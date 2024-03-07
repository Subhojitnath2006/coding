#include <stdio.h>
void reverse(int arr[], int a, int b)
{

    // while (i < j)
    // {
    //     // arr[i] and arr[j]
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }

    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d \n",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("enter index %d element:",i);
        scanf("%d \n",&arr[i]);
    }
    int i=0;
    int j=n-1;
    int k;
    printf("enter k:");
    scanf("%d \n",&k);
    if(k>n){
       return  k=k%n;
    }else{
        return k;
    }


    reverse(arr,i,j);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for (int i = 0; i <= n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}