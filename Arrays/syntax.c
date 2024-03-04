#include <stdio.h>
int main(){

    // int arr[5]={1,2,3,4,5};
    // arr[2]=100; //{1,2,100,4,5}
    // printf("%d \n",arr[2]);

    // float a[3]= {1.2,3.4,6.7};
    // printf("%f \n",a[1]);

    // char b[3]= {'a','b','c'};
    //  printf("%c \n",b[1]);

     int arr[3];
    //  printf("enter first element: ");
    //  scanf("%d \n",&arr[0]);
    //  printf("enter second element: ");
    //  scanf("%d \n",&arr[1]);
    //  printf("enter third element: ");
    //  scanf("%d \n",&arr[2]);

    //  printf("%d \n",arr);


// printing output and taking input.
    for(int i=0; i<=2;i++){
        printf("\n enter element number %d :",i+1);
        scanf("%d ",&arr[i]);
        
    }
    for(int i=0; i<=2;i++){
        printf("%d ",arr[i]);
    
    }
    
    return 0;
}