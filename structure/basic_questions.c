#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct book
    {
        char name[50];
        float price;
        int noOfPages;

    } book;
    book a;
    a.noOfPages = 100;
    a.price = 411.5;
    strcpy(a.name, "Secret Seven");

    printf("%d\n", a.noOfPages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    // struct Person{
    //     char name[50];
    //     int salary;
    //     int age;
    // };
    // how are structure elements stored?

    // elements are stored in a continuous memory location

    return 0;
}