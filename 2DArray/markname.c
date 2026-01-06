#include<stdio.h>

int main(){
    int arr[4][2];
    for(int r=0;r<4;r++){
        for(int c=0;c<2;c++){
             printf("Student marks :");
             scanf("%d",&arr[r][c]);
        }
    }
    for(int r=0;r<4;r++){
        for(int c=0;c<2;c++){
             printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}