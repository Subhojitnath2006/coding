#include <stdio.h>
int main(){

    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    int m;
    printf("enter no of columns: ");
    scanf("%d",&m);

    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            
            if( (j==1 || j==m)  &&  (i==1 || i==n)){
                printf("* ");
            }
            
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}