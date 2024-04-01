#include <stdio.h>
int main(){

     typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    }pokemon;

    pokemon a,b,c;
    a.attack= 100;
    a.hp= 100;
    a.speed= 90;
    a.tier= 'A';
    strcpy(a.name,"Blasttroise");

    //copy all the objects of a into b

    b=a;  // b me hi a aa gaya
    // it creates a deep copy means if we can anything in b it doesn't change anything in a

    b.attack= 200;
    c=a;
    printf("%d",b.attack); //200
    printf("%d",a.attack); // 100

    return 0;
}