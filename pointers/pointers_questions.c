#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{

    // int *ptr;
    // int x;

    // ptr= &x;
    // *ptr=0;

    // printf("x is: %d \n",x); //0
    // printf("*ptr is: %d \n",*ptr); //0

    // *ptr+=5;
    // printf("x is: %d \n",x); //5
    // printf("*ptr is: %d \n",*ptr); //5

    // (*ptr)++;
    // printf("x is: %d \n",x); //6
    // printf("*ptr is: %d \n",*ptr); //6

    // print the value of "i" from its pointer to pointer

    // int i=5;
    // int *ptr= &i;
    // int **pptr= &ptr;
    // printf("%d \n",**pptr);

    // swap two numbers a and b
    int x = 3, y = 5;
    swap(x, y);
    printf("x= %d and y= %d \n",x,y);

    _swap(&x, &y);
    printf("x= %d and y= %d \n",x,y);

    return 0;
}
// call by value
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = a;
    printf("a= %d and b= %d \n", a, b);
}
//call by reference
void _swap(int *a, int *b){
    int t= *a;
    *a= *b;
    *b= t;

}



