#include<stdio.h>
int add(int a,int b){
return a+b;
}

int main(){
        int a,b;
    printf("Enter a 1st number :");
    scanf("%d",&a);
    printf("Enter a 2nd number :");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("Total sum is %d ",sum);
    return 0;
}