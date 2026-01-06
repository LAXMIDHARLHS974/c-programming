#include<stdio.h>
#include<string.h>
    typedef struct member{
        int salary;
        float commission;
        char position[65];
    }member;

    void change(member* boss){
        //(*boss).salary=100000000;//we are innicilazy by this type
        //(*boss).commission=895437;
        //strcpy((*boss).position,"CEO");
        boss->salary=100000000;
        boss->commission=895437;
        strcpy(boss->position,"CEO");
    }
int main(){ 
    member m1={8132352,500000.34,"SWE"};//Inciazide by this type
    //m1.salary = 8132352;
    //m1.commission = 500000.34;
    //strcpy(m1.position,"SWE"); 

    printf("my salary = %d\n",m1.salary);
    printf("my commission = %f\n",m1.commission);
    printf("my position = %s\n",m1.position);
printf("\n");
    change(&m1);
    printf("Boss changed my salary = %d\n",m1.salary);
    printf("Boss changed my commission = %f\n",m1.commission);
    printf("Boss changed my position = %s\n",m1.position);


    return 0;
}