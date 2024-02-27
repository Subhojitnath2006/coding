# include <stdio.h>
# include <math.h>
int main(){

    int a=1, b=2;
    int sum= a+b;
    int multiply= a*b;
    int division= a/b;
    int power= pow(a,b);
    // printf("power: %d \n",power);

    //int x,y=a*b; it is a invalid instruction. we can't write more than one variable at LHS.


    // *************Modular operator **************
    // a%b returns the remainder of a divide by b
    // it only opeartes on integer.
    printf("%d \n",16%10);
    printf("%d \n",-5%3);

    // ************Type conversion ***************
    /*
    int operator int= int
    float operator float= float
    int operator float= float
    */

   printf("%f \n",2*4.16);
   printf("%f \n",2.4*4.16);

   // question on type conversion

   int A= (int) 1.999999;
   printf("%d \n",A);

   // Operator precedence

   // *,/,% -------> +,- --------> =(assign operator)

   int B= 4+9*10;
   printf("%d \n",B);


   // Associavity(for same precedence)
   // Left to right
   int C= 4*3/6*2;
   printf("%d \n",C);


    return 0;
}