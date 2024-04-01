#include <stdio.h>
int main(){

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];

    }pokemon;

    // pokemon pikachu;
    // pokemon charizard;

// array of pokemons

pokemon arr[3];  // arr[0], arr[1], arr[2]

//declaration of array
arr[0].attack =50;
arr[0].hp = 100;
arr[0].speed= 30;
arr[0].tier= 'A';
strcpy(arr[0].name,"Charizard");

arr[1].attack =150;
arr[1].hp = 100;
arr[1].speed= 130;
arr[1].tier= 'S';
strcpy(arr[1].name,"pikachu");

arr[2].attack =50;
arr[2].hp = 100;
arr[2].speed= 30;
arr[2].tier= 'A';
strcpy(arr[2].name,"mewtwo");

//printing the array of structures

for(int i=0;i<3;i++){
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].hp);
    printf("%d\n",arr[i].speed);
    printf("%c\n",arr[i].tier);
    printf("%s\n",arr[i].name);
}

    return 0;

}