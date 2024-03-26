#include <stdio.h>
#include <string.h>
int main(){

    // char *str= "Subhojit";
    // printf("%d",strlen(str));

    // char s1[]="Subhojit";
    // char s2[9];
    // strcpy(s2,s1);
    // s2[0]='M';
    // printf("%s\n",s2);
    // printf("%s",s1);


// char s1[13]="Subhojit";
// char s2[]="Nath";
// strcat(s1,s2);
// printf("%s",s1);

char str[]="subhojit";
for(int i=6;i>=3;i--){
    str[i+1]=str[i];

}
    return 0;
}