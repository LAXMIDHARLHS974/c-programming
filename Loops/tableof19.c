#include<stdio.h>

int main(){
    for(int i=19;i<=190;i=i+19){
        printf("%d ",i);
    }

    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for(int j=1;j<=10;j++){
        printf("%d X %d = %d\n",n,j,n*j);
    }
    return 0;
}