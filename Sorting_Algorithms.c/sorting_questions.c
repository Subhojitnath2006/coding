// #include <stdio.h>
// int main(){
//     int arr[9]= {5,0,2,0,0,4,1,3,0};
//     int ans[9];
//     int idx=0;
//     for(int i=0;i<9;i++){
//         if(arr[i]!=0){
//             ans[idx]= arr[i];
//             idx++;
//         }
//     }
//     for(int i=idx;i<9;i++){
//         ans[i]=0;
//     }
//     for(int i=0;i<9;i++){
//         printf("%d ",ans[i]);
//     }
// }
#include <stdio.h>
int main(){
int n;
printf("enter a number: ");
scanf("%d",&n);

switch(n%2){
    case 1: printf(" odd ");
    break;
    case 0: printf("even");
    break;
    default: printf("invalid");
}
return 0;
}