#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter b number : ");
    scanf("%d",&b);

    printf("Enter c number : ");
    scanf("%d",&c);

    if (a>b) {
        if(a>c) {
            printf("%d is grater\n",a);
        }
        else{
            printf("%d is grater\n",c);
        }
    }
    else{
        if(b>c){
            printf("%d is grater\n",b);
        }
        else{
            printf("%d is grater\n",c);
        }
    }
    
    
    return 0;
}