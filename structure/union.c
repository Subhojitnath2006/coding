
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef union pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    } pokemon;

// using union we can access only one value at a time.
// if we input all the properties and try to print all of them the only the last property printed correctly.



int main()
{
    



    return 0;
}
