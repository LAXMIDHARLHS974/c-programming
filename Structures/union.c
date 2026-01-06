#include<stdio.h>
#include<string.h>
typedef union member{
        int salary;
        float commission;
        char position[65];
}member;
int main(){ 
    member m1;
    m1.salary = 8132352;
    m1.commission = 500000.34;
    strcpy(m1.position,"SWE"); 

    printf("my salary = %d\n",m1.salary);
    printf("my commission = %f\n",m1.commission);
    printf("my position = %s\n",m1.position);
    return 0;
}