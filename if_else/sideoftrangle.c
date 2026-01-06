#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter size of 1rd side : ");
    scanf("%d",&a);

    printf("Enter size of 2rd side : ");
    scanf("%d",&b);

    printf("Enter size of 3rd side : ");
    scanf("%d",&c);

    if((a+b) > c && (b+c) > a && (c+a) > b){
        printf("It is a valide tarngle\n");
    }
    else{
        printf("It is not a trangle\n");
    }
    return 0;
}