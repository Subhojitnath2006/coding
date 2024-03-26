#include <stdio.h>
int main(){

    // char str[]="Subhojit Nath";
    // char *ptr= "subhojit nath"; //ptr now points to str[0]
    //char *ptr= &str[1];
    // printf("%p\n",&str[0]);
    // printf("%p\n",str);

    // int i=0;
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }

    //character's pointer can also be used to store address of a string

// str[0]='m';
// printf("%s",str);

// char *ptr= "Subhojit Nath";
// // ptr[0]='m';  read only behaviour
// printf("%c",*ptr);

//in normal initialization we can modify individual characters but not the entire string
// pointer initialization we can modify the entire strings as well as  an individual character

char str[]="College Wallah";
char *ptr= str;
// char *p= str;
// *p="p";
ptr="Physics Wallah";
printf("%s",str);



    return 0;
}