#include <stdio.h>
int main(){

    int n;
    printf("the no of rows:");
    scanf("%d",&n);
    
    int m;
    printf("the no of columns:");
    scanf("%d",&m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",arr[i][j]);
        }
    }
    printf("\n");
    int max=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(max<arr[i][j]){
            max= arr[i][j];
           }
           printf("the maximum element is: %d",arr[i][j]);
           printf("the index of the element is: (%d,%d)",i,j);
        }
        
    }
    

    return 0;
}