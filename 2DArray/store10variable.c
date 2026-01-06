#include<stdio.h>

int main(){
    int arr[5][5];
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}