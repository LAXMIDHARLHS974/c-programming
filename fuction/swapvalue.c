#include<stdio.h>
#include<math.h>

int main(){
    int a,b,temp;//swaping value
    printf("Enter a valua :");
    scanf("%d",&a);
    
    printf("Enter b valua :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d ",a,b);
    
    return 0;
}