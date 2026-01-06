#include <stdio.h>

int main(){
    int x;
    printf("Enter a number =");
    scanf("%d",&x);
    if (x<0) {
     x=x*(-1);   
    }
    printf("It is absolute value %d\n",x);
    
    return 0;
}