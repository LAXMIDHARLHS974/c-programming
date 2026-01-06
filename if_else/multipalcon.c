#include<stdio.h>

int main(){
    // int n;
    // printf("enter a number : ");
    // scanf("%d",&n);
    // if (n>99 && n<1000) {
    //     printf("%d is a 3 digit number",n);
    // }
    // else{
    //     printf("%d is not a 3 digit number",n);
    // }

    //AND OPERATOR

    // int d;
    // printf("enter a number : ");
    // scanf("%d",&d);
    // if (d%3==0 && d%5==0) {
    //     printf("%d It is divide by 3 or 5 numbers\n",d);
    // }
    // else{
    //     printf("%d It is not divide by 3 or 5 numbers\n",d);
    // }

    //OR

    // int d;
    // printf("enter a number : ");
    // scanf("%d",&d);
    // if (d%15==0) {
    //     printf("%d It is divide by 3 or 5 numbers\n",d);
    // }
    // else{
    //     printf("%d It is not divide by 3 or 5 numbers\n",d);
    // }

//OR OPERATOR

    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if (n%3==0 || n%5==0) {
        printf("%d It is divide by 3 or 5 numbers\n",n);
    }
    else{
        printf("%d It is not divide by 3 or 5 numbers\n",n);
    }

    return 0;
}