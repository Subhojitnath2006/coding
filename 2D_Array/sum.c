#include <stdio.h>
int main(){

    int n;
    printf("the no of rows:");
    scanf("%d",&n);
    
    int m;
    printf("the no of columns:");
    scanf("%d",&m);
    int arr[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum= sum+arr[i][j];
        }
    }
    printf("the sum is: %d \n",sum);

    return 0;
}