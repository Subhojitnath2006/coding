#include <stdio.h>
int main()
{

    // for loop
    //  i----> iterator or counter
    //  int i;
    //  for ( i = 0; i < 5; i++)
    //  {
    //     printf("hello world \n");
    //  }

    // for (int i = 0; i <= 10; i++)
    // {
    //     printf("%d \n", i);
    // }

    // increament operator----> ==i and i++
    //++i-----> pre increament operator
    // i++--------> post increament operator
    int i = 1;
    printf("%d \n", i++); // use then increase
    printf("%d \n", i);

    printf("%d \n", ++i); // increase then use
    printf("%d \n", i);

    // decreament operator--------> --i and i--
    //--i-------> pre decreament operator
    // i-- ---------> post decreament operator

    printf("%d \n", i--); // use then decrease
    printf("%d \n", i);

    printf("%d \n", --i); // decrease then use
    printf("%d \n", i);

    // for loop for float and character

    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f \n", i);
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c \n", ch);
    }

    // infinite loop

    //    for(int i=1; ;i++){
    //     printf("%d \n",i);
    //    }

    // while loop

    int i = 1;
    while (i <= 5)
    {
        printf("%d \n", i);
        i++;
    }

    // do while loop
    int i = 5;
    do
    {
        printf("%d \n", i);
        i++;

    } while (i <= 5);


    //break statement

    for(int i=1; i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d \n", i);
    }
    printf("end");
    return 0;
}