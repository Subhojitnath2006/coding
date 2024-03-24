#include <stdio.h>
int main()
{

    // strings---> character arrays
    //  char arr[4]= {'a','b','c','d'};
    //  printf("%p \n",&arr[0]);
    //  printf("%p \n",&arr[1]);
    //  printf("%p \n",&arr[2]);
    //  printf("%p \n",&arr[3]);
    // printf("%c",arr[2]);

    // print ASCII value of a character.
    //  char ch='A';
    //  int x=(int)ch;
    //  printf("%d",ch);
    //  printf("%d",x);
// ASCII value of \0 is  0.
    // null character
    char arr[] = {"h", "e", "l", "l", "o","\0"};
    // for(int i=0;i<5;i++){
    //     printf("%c",arr[i]);
    // }

    // char ch = '\0'; //null character
    // printf("%c", ch);

    // int x=0;
    // char a=(char)x; // a-->'\0'
    // printf("%c",a);

    int i=0;
    while(arr[i]!= "\0"){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}