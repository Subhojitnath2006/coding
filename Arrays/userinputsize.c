#include <stdio.h>
int main(){

    int n;
    printf("enter tke size of array: ");
    scanf("%d \n",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}