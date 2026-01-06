#include<stdio.h>

int main(){
int a,b;//swaping value with out useing thired variable
    printf("Enter a valua :");
    scanf("%d",&a);
    printf("Enter b valua :");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d\nb=%d ",a,b);
    return 0;
}