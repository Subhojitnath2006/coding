#include <stdio.h>
int main()
{

    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1; k<=nst;k++){
            printf("* ");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}
