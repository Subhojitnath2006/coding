#include <stdio.h>
#include <stdbool.h>
int main(){

    // int arr[7]={1,2,3,4,5,6,7};
    // int x=4;
    // int idx=-1;
    // bool flag= false;
    // for(int i=0; i<=6;i++){
    //     if(arr[i]==x){
    //         flag= true; //true means present
    //         idx=i;
    //         break;
    //     }
    // }
    // if(flag==false){
    //     printf("%d is not present in the array ",x);
    // }else{
    //     printf("%d is present in the array and its index is %d",x,idx);
    // }

    int arr[10]={1,2,3,4,6,7,8,9,10};
    int sum1=0;
    for(int i=0;i<=8;i++){
        sum1= sum1+arr[i];
    }
    int sum2= (10*(10+1))/2;

    int missingnumber= sum2-sum1;
    printf("the missing number is: %d",missingnumber);
    return 0;
}