#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        float speed;
        char name[90];
    }pokemon;

    typedef struct legendarypokemon{
        pokemon all;
        char power[43];
    }legendarypokemon;

    legendarypokemon psyduck;
    strcpy(psyduck.power,"Hypnotize");
        psyduck.all.hp=345;
        psyduck.all.speed=435;
    return 0;
}