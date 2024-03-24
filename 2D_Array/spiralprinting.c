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
    return 0;
}