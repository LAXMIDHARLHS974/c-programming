#include<stdio.h>

int main(){
    int n;
    printf("enter a value : ");
    scanf("%d",&n);
    // if (n%3==0 || n%5==0) {
    //     if(n%15!=0) {
    //         printf("It is divide by 3 or 5 but not 15\n");
    //     }
    //     else{
    //         printf("It is divide to 15\n");
    //     }
    // }
    if((n%3==0 || n%5==0) && n%15!=0){
        printf("It is divide by 3 or 5 but not 15\n");
    }
    else
    {
      printf("It is not devide by 3 or 5\n");  
    }
    
    return 0;
}