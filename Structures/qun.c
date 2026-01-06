#include<stdio.h>
#include<string.h>
int main(){
    struct Person {
        char name[60];
        int salary;
        int age;
    };
    struct Person a;
    strcpy (a.name,"Rohit");
    a.age=24;
    a.salary=8000000;
    struct Person b;
    strcpy (b.name,"sima");
    b.age=22;
    b.salary=250000;

    printf("%s\n",a.name);
    printf("%d\n",b.age);
    return 0;
}