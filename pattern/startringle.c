#include<stdio.h>

int main(){
    int column;
    printf("Enter a column : ");
    scanf("%d",&column);
    for (int i=1;i<=column;i++) {
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}