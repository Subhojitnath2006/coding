#include <stdio.h>
int main(){
// 1 2
// 3 4
int r;
printf("enter the no of rows:");
scanf("%d",&r);
int c;
printf("enter the no of columns:");
scanf("%d",&c);
    int arr[r][c];
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      scanf("%d ",&arr[i][j]);
    }
    
}
printf("\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

    return 0;
}