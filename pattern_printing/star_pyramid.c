#include <stdio.h>
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for(int k=(n-i); k>=1;k--){
            printf("  ");
        }
        for(int j=1; j<=2*i-1;j++){
            printf("* "); 
        }
        printf("\n");
    }
    return 0;
}