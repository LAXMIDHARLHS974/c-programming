#include<stdio.h>

int main(){
    int num1,num2;
    printf("enter num1 : ");
    scanf("%d",&num1);
    printf("enter num2 : ");
    scanf("%d",&num2);
    int power=1;
    for (int i = 1; i<=num2; i++)
    {
     power=power*num1;
    }
    printf("%d\n",power);
    
    return 0;
}