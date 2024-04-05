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
void change(pokemon *p)
{
    // way of accessing/ initialization/modifying
    (*p).hp = 70; // by reference it changes the properties permanently.

    // another method
    p->hp = 70;
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 60;
    pikachu.attack = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "pikachu");

    // initialization of structure using array
    pokemon pikachu = {60, 60, 100, 'A', "pikachu"}; // we have to write all the values in the order of declaration.

    // int* --> address of integer value

    // pokemon* x= &pikachu;  //stores address of strucure pikachu
    //  printf("%p\n",x);

    printf("%d\n", pikachu.hp);
    //

    // accessing all the properties of a structure using pointer

    // (*x).hp= 70;

    // printf("%d",pikachu.hp); //using pointer we can change as well as modify the given properties

    change(&pikachu);
    printf("%d", pikachu.hp);

    return 0;
}
