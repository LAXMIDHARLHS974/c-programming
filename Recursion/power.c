#include<stdio.h>
int power (int a,int b){
    if(b==0)return 1;
    int recAns=a*power(a,b-1);
    return recAns;
}

int main(){
    int a,b;
    printf("Entar a base number :");
    scanf("%d",&a);
    printf("Entar a power number :");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d is base and %d is the power answer is %d",a,b,p);
    return 0;
}