#include<stdio.h>
int main(){
    // int a;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // char c;
    // printf("Enter symbol what you do : ");
    // scanf(" %c",&c);
    // int b;
    // printf("Enter a number : ");
    // scanf("%d",&b);
    // if(c=='+'){
    //     printf("The answer is = %d\n",a+b);
    // }
    // else if (c=='-'){
    //     printf("The answer is = %d\n",a-b);
    // }
    // else if (c=='*'){
    //     printf("The answer is = %d\n",a*b);
    // }
    // else if (c=='/'){
    //     printf("The answer is = %d\n",a/b);
    // }
    

    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    char ch;
    printf("Enter symbol what you do : ");
    scanf(" %c",&ch);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);

    switch (ch)
    {
    case '+':
        printf("The answer is = %d\n",a+b);
        break;
    case '-':
        printf("The answer is = %d\n",a-b);
        break;
    case '*':
        printf("The answer is = %d\n",a*b);
        break;
    case '/':
        printf("The answer is = %d\n",a/b);
        break;
    }
    return 0;
}