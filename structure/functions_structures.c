#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    } pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
}
void change(pokemon p){
    p.hp= 70;
    p.attack= 80;
    p.speed= 100;
}
int main()
{
    
pokemon p;
p.hp= 60;
p.attack= 50;
p.speed= 100;
change(p);
//fun(p);
printf("%d\n",p.hp);
printf("%d\n",p.attack);
printf("%d\n",p.speed);

// structures are pass by value



    return 0;
}
