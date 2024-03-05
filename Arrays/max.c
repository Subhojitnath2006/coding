#include <stdio.h>
#include <limits.h>
int main(){

    int arr[5]={1,56,7,34,89};
    // int max=arr[0];
    int max= INT_MIN;  //sabse chota number.
    for(int i=0; i<=4;i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    printf("the maximum value is: %d \n",max);
    return 0;
}