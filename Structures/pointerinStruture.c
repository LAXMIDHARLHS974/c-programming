#include<stdio.h>
#include<string.h>
    // typedef struct pokemon{
    //     int hp;
    //     float speed;
    //     char power[90];
    // }pokemon;

    typedef struct member{
        int salary;
        float commission;
    }member;
int main(){
    // pokemon pikachu;
    // pikachu.hp=6445;
    // pikachu.speed=245;
    // strcpy(pikachu.power,"electic");
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",pikachu.power);
    
    // pokemon* x=&pikachu;
    // printf("%p",x);

    
    member m1;
    m1.salary=8132352;
    m1.commission=500000.34;
    printf("my salary = %d\n",m1.salary);
    printf("my commission = %f\n",m1.commission);

    member* cr=&m1;
    (*cr).salary=8000000;
    (*cr).commission=489000.40;
    printf("CR changed my salary = %d\n",m1.salary);
    printf("CR changed my commission = %f\n",m1.commission);

    return 0;
}