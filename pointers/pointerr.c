#include <stdio.h>
int main(){

    int a=5;
    int* x=&a;  //it stores the address of a 
    printf("%p \n",&a);  // prints the address of a.
    printf("%p \n",&x);  //%p prints the address 
    printf("%p \n",x);  // prints the address of a
    printf("%p \n",*x);  //prints the value corresponding to the address stored in x.
    return 0;
}