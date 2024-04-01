#include <stdio.h>
#include <stdbool.h>
int main(){

    typedef struct date{
        int date;
        int month;
        int year;

    }date;

    date a,b;
// a---> 5/ 12 / 1999
// b---> 19/01/2024
    a.date= 5;
    a.month= 12;
    a.year= 1999;

    b.date= 5;
    b.month= 01;
    b.year= 2024;


//compairing two dates
     bool flag= true;
    if(a.date!=b.date) flag= false;
    if(a.month!=b.month) flag= false;
    if(a.year!=b.year) flag= false;
       
    if(flag== true) printf("the dates are equal");
    else printf("the dates are not equal");
    // we can't compare two structures
    // means we cant write a==b directly
    return 0;
}