#include<stdio.h>
// int fibonacci(int n){
//     if(n==1||n==2)return 1;
//     int firts1=fibonacci(n-1);
//     int second2=fibonacci(n-2);
//     int sum=firts1+second2;
//     return sum;
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int fibo=fibonacci(n);
//     printf("%d\n",fibo);
//     return 0;
// }




int fibonacci(int n){
    if(n<=2)return 1;
    return fibonacci(n-1)+(n-2);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int fibo=fibonacci(n);
    printf("%d\n",fibo);
    return 0;
}