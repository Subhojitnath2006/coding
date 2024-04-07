#include <stdio.h>
int main(){

    int arr[5]={1,5,0,9,2};
    int n=5;
    printf("Unsorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp= arr[j-1];
            arr[j-1]= arr[j];
            arr[j]= temp;
            j--;
        }
    }
    printf("\n");
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// Insertion Sort----->swapping from end till the element finds its position
// swap happens only when the element is smaller than its left element
// is insertion sort stable? ---> yes.
