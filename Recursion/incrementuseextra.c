#include<stdio.h>

void increasing(int x,int n){ //use extra variable
    if(x>n) return;
        printf("%d\n",x);
        increasing(x+1,n);
    return ;
}
int main(){
    int n;
    printf("enter a number :");//use extra variable
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}