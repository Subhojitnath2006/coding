#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    } pokemon;

    // nesting one structure into another
    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "presurre");
    mewtwo.normal.hp = 150;
    strcpy(mewtwo.normal.name, "Mewtwo");

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turn anyone into stone");
    arceus.legend.normal.hp = 150;

    return 0;
}