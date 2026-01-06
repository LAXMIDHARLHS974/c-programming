#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f=1,s=1,sum=1;
    for (int i=1; i<=(n-2); i++){
        sum=f+s;
        f=s;
        s=sum;
        printf("the %dth is fibonacci is %d\n",i,sum);
    }
    // printf("the %dth is fibonacci is %d\n",n,sum);
    return 0;
}