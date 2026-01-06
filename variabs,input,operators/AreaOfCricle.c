#include<stdio.h>

int main(){
    int r;
    printf("Enter a Radius = ");
    scanf("%d",&r);
    float pi=3.14;
    float A = pi * r *r ;
    printf("Area Of Cricle %f",A);
    return 0;
}