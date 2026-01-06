#include<stdio.h>

int main() {
    char x;
    printf("Enter a char = ");
    scanf("%c",&x);
    int num1,num2,result;
    printf("Enter a num1 = ");
    scanf("%d",&num1);

    printf("Enter a num2 = ");
    scanf("%d",&num2);

    switch (x)
    {
    case'+':
    result=num1+num2;
        printf("Result = %2d\n",result);
        break;
        case'-':
       result=num1-num2;
        printf("Result = %2d\n",result);
        break;
    case'*':
    result=num1*num2;
        printf("Result = %2d\n",result);
        break;
        case'/':
    result=num1/num2;
        printf("Result = %2d\n",result);
        break;
        default:
        printf("invalide \n");
        break;
    }



    return 0;
}