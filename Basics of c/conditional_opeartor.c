#include <stdio.h>
int main()
{

    int age;
    printf("enter age: ");
    scanf("%d \n", &age);
    if (age >= 18)
    {
        printf("adult \n");
    }
    else if (age > 13 && age < 18)
    {
        printf("teenager \n");
    }
    else
    {
        printf("not adult \n");
    }

    // ***************switch***************

    int day;
    printf("enter day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("monday \n");
        break;
    case 2:
        printf("tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("thrusday \n");
        break;
    case 5:
        printf("friday \n");
        break;
    case 6:
        printf("saturday \n");
        break;
    case 7:
        printf("sunday \n");
        break;

    default:
        printf("not a valid date \n");
        break;
    }
    // cases can be in any order
    // nested switch(switch inside switch) are allowed.

    // question on conditional opeartor
    int marks;
    printf("enter marks: ");
    scanf("%d \n", &marks);
    if (marks > 30)
    {
        printf("student passed \n");
    }
    else if(marks > 0 && marks <= 30)
    {
        printf("student failed \n");
    }
    else
    {
        printf("enter a valid marks \n");
    }


// check wheather a character is uppercase or lowercase

    char ch;
    printf("enter a character: ");
    scanf("%c \n",&ch);
    if(ch>= 'a' && ch<= 'z'){
        printf("the character is lowercase \n");
    }else if(ch>='A' && ch<='Z'){
        printf("the character is uppercase \n");
    }else{
        printf("enter a valid character \n");
    }

    return 0;
}
