#include <stdio.h>
void square(int n);
void _square(int *n);
int main()
{

    // int age=22;
    // int *ptr=&age;
    // int _age= *ptr;
    // printf("%d \n",_age);

    // address

    // printf("%p \n",&age);
    // printf("%u \n",&age);

    // printf("%p \n",ptr);
    // printf("%u \n",ptr);

    // printf("%p \n",&ptr);
    // printf("%u \n",&ptr);

    // printf("%d \n",age);
    // printf("%d \n",*ptr); //value of the address at the pointer.
    // printf("%d \n",*(&age));

    // pointer to pointer

    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;
    // float _price= **pptr;

    // printf("%d \n",_price);


    //pointers in function call

int number=4;
square(number);
printf("number= %d \n",number);

_square(&number);
printf("number= %d \n", number);

    return 0;
}
// call by value.
void square(int n){
    n= n*n;
    printf(" square area: %d \n",n);
}

//call by reference.
void _square(int *n){
    *n= (*n)*(*n); //4*4
    printf(" square area: %d \n",*n);
}