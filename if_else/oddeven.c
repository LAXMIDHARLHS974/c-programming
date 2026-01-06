#include<stdio.h>

int main(){
    // int x;
    // printf("Enter a number =");
    // scanf("%d",&x);
    // if (x%2==0) {
    //     printf("%d is even number\n",x);
    // } else{
    //     printf("%d is odd number\n",x);
    // }


    // int n;
    // printf("enter a number =");
    // scanf("%d",&n);
    // if (n%5==0) {
    //     printf("%d is divisiable 5\n",n);
    // }
    // else{
    //     printf("%d is not divisiable 5\n",n);
    // }

    int year;
    printf("enter a year : ");
    scanf("%d",&year);
    if (year%4==0) {
        printf("%d It is a leap year\n",year);
    }
    else{
        printf("%d It is not a leap year\n",year);
    }
    

    
    return 0;
}