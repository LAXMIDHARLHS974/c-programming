#include<stdio.h>
int main(){ 
    int r,c;
    printf("Enter number of row :");
    scanf("%d",&r);
    printf("Enter number of column :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("Enter number :");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sum =0;
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            sum=sum+arr[k][l];
            printf("the sum of matix is %d\n",sum);
        }
    }
    printf("the sum of matix is %d",sum);
    
    return 0;
}