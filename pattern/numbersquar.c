#include<stdio.h>

int main(){
    int column;
    printf("Enter a column :  ");
    scanf("%d",&column);

    for(int i =1;i<=column;i++){
        for (int j=1;j<=column;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}