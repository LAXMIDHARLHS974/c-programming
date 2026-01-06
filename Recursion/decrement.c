#include<stdio.h>

void decrea(int n){
    if(n==0) return;
    printf("%d\n",n);
    decrea(n-1);
    return ;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    decrea(n);
    return 0;
}