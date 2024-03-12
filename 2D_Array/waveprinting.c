#include <stdio.h>
int main(){

    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    int m;
    printf("enter no of columns: ");
    scanf("%d",&m);
    int a[n][m];
    printf("\n enter elements of matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //wave print

// for(int i=0;i<n;i++){
//     if(i%2==0){
//         for(int j=0;j<m;j++){
//             printf("%d ",a[i][j]);
//         }
//     }else{
//         for(int j=m-1;j>=0;j--){
//             printf("%d ",a[i][j]);
//         }
//     }
//         printf("\n");
//     }

// for(int j=0;j<n;j++){
//     if(j%2==0){
//         for(int i=n-1;i>=0;i--){
//             printf("%d ",a[i][j]);
//         }
//     }else{
//         for(int i=0;i<m;i++){
//             printf("%d ",a[i][j]);
//         }
//     }
//         printf("\n");
//     }


    return 0;
}