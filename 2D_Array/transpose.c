#include <stdio.h>
int main(){
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{2,4,6,8}};
    
    
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d \n",arr[j][i]);
    //     }
    // }

    //other methods

    int n;
    printf("the no of rows:");
    scanf("%d",&n);
    
    int m;
    printf("the no of columns:");
    scanf("%d",&m);
    int arr[n][m];
    int brr[m][n];
   printf("enter all the elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //printf("%d",arr[i][j]);
            brr[i][j]=arr[j][i];
        }
    }
    //printing brr
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",brr[i][j]);
        }
        
    }
    return 0;
}