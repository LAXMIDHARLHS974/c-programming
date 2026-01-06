#include<stdio.h>
void swap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return;
}
int main(){
    int a,b;//swaping value with out useing thired variable and use function and pointer
    printf("Enter a valua :");
    scanf("%d",&a);
    printf("Enter b valua :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}