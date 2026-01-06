#include<stdio.h>

int main (){
    int l;
    int b;
    printf("Enter leanth : ");
    scanf("%d",&l);
    printf("enter breadth : ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if (a>p) {
        printf("Area is greater then preimeter\n");
    }
    else{
        printf("Area is not greater then preimeter\n");
    }
    
    return 0;
}