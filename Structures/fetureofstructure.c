#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        float speed;
        char name[90];
    }pokemon;
    pokemon a,b,c;
    strcpy(a.name,"picachu");
    a.hp=654;
    a.speed=900;


    // strcpy(b.name,a.name);
    // b.hp=a.hp;//we write this type and those type
    // b.speed=a.speed;
    
    b=a;
    printf("%s",b.name);
    return 0;
}