#include <stdio.h>
int main(){

    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int size[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d ",&size[i]);
    }
    for(int i=0; i<=n-1; i++){
        if(size[i]==size[n-1-i]){
            printf("the array is palindrome");
        }
        else{
             printf("the array is not palindrome");
        }
    }

    return 0;
}