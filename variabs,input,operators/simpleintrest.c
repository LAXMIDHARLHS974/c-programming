#include<stdio.h>

int main (){
    float principal,rate,time;
    printf("Enter a principal :");
    scanf("%f",&principal);
    printf("Enter a rate :");
    scanf("%f",&rate);
    printf("Enter a time :");
    scanf("%f",&time);
    float si = (principal * rate * time)/100;
    printf("Simple Intrest Of Loan %f\n",si);
    return 0;
}