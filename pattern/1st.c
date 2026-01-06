#include<stdio.h>

int main(){
    int column;
    printf("Enter column : ");
    scanf("%d",&column);

    for (int i=1;i<=column;i++) { //outer line alwase print no of lines
        for (int j=1;j<=column; j++) {
            printf("*");
        }
        printf("\n");
    }

//new 

    int column1,row2;
    printf("Enter column : ");
    scanf("%d",&column1);

    printf("Enter row2 : ");
    scanf("%d",&row2);

    for (int k=1;k<=column1;k++) { //outer line alwase print no of lines
        for (int l=1;l<=row2; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}