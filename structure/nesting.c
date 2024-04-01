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
    return 0;
}