#include<stdio.h>
#include<string.h>
    typedef struct pokemon{
        int hp;
        float speed;
        char name[90];
    }pokemon;

    void call(pokemon p){
        printf("%d",p.hp);
        return;
    }
int main(){
    pokemon pikachu;
    pikachu.hp=656;

    call(pikachu);

    

    return 0;
}