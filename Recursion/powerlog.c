#include<stdio.h>
int powerlog(int a,int b){
    if (b==1)return a;
    if(b==0)return 1;
    int x = powerlog(a,b/2);
    if(b%2==0)
        return x*x;
    else
        return x*x*a;
}

int main(){
    int a,b;
    printf("Entar a base number :");
    scanf("%d",&a);
    printf("Entar a power number :");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d is base and %d is the power answer is %d",a,b,p);
    return 0;
}