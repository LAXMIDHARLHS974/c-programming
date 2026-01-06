#include<stdio.h>

int main(){
    int cp;
    int sp;
    printf("Enter cost price : ");
    scanf("%d",&cp);
    printf("Enter sell price : ");
    scanf("%d",&sp);

    if (cp>sp) {
        printf("Profit\n");

    }
    else{
        printf("loss\n");
    }
    
    return 0;
}