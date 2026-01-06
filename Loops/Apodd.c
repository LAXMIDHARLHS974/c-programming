#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }

    int j;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for(int k=4;k<=3*n+1;k=k+3){
        printf("%d ",k);
    }
    return 0;
}