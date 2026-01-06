#include<stdio.h>

void decrea(int n){
    if(n==0) return;
    decrea(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    decrea(n);
    return 0;
}