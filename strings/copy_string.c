#include <stdio.h>
#include <string.h>
int main(){
 //copy one string to another creating a swallow copy
    // char s1[]="College Wallah";
    // char *s2= s1;
    // s1[0]='p';
    // printf("%s",s2);

    //copy one string to another creating a deep copy

    char s1[]="Physics Wallah";
    int i=0;
    int size=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s2[size];
    for(int i=0,j=0;i<=j;i++,j++){
        s1[i]=s2[j];
    }
    printf("%c",s2[0]);
    return 0;
}