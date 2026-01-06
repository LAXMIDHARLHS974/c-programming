#include<stdio.h>
#include<math.h>

void sum(){
    int a,b;
    printf("Enter a 1st number :");
    scanf("%d",&a);
    printf("Enter a 2nd number :");
    scanf("%d",&b);
    int sum=a+b;
    printf("Total sum is %d ",sum);
    return;
}     //sum of two number 

int main(){
    sum();
    return 0;
}