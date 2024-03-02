#include <stdio.h>
int main(){

    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            int c= n/2+1;
            if( j==c || i==c){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}