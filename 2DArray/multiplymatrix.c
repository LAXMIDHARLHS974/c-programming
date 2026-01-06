#include<stdio.h>
int main(){ 
    // int arr[2][3]={{1,2,3},{4,5,6}};
    // int lss[3][2]={{1,2},{3,4},{5,6}};
    // int res[2][2];
    // int cr=3;
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<2;j++){
    //         res[i][j]=0;
    //         for(int k=0;k<cr;k++){
    //             res[i][j]=res[i][j]+arr[i][k]*lss[k][j];
    //         }
    //     }
    // }
    
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<2;j++){
    //         printf("%d ",res[i][j]);
    //     }
    //     printf("\n");
    // }






//input by user


    int m,n,p,q;
    printf("Enter on of 1st matrix row number :");
    scanf("%d",&m);
    printf("Enter on of 1st matrix column number :");
    scanf("%d",&n);
    printf("Enter on of 2nd matrix row number :");
    scanf("%d",&p);
    printf("Enter on of 2nd matrix column number :");
    scanf("%d",&q);

    if(n==q){

    int arr[m][n];
    int crr[p][q];
    int rec[m][q];
//first matrix
    printf("enter the elements of 1st matrix\n"); 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
//second matrix 
    printf("enter the elements of 2st matrix\n");
    for(int k=0;k<p;k++){
        for(int l=0;l<q;l++){
            scanf("%d",&crr[k][l]);
        }
    }
//result of the matrix
    for(int r=0;r<m;r++){
        for(int c=0;c<q;c++){
            rec[r][c]=0;
            for(int a=0;a<n;a++){
                rec[r][c]=rec[r][c]+arr[r][a]*crr[a][c];
            }
        }
    }
//then print the print the result
printf("result of the matrix\n");
    for(int r=0;r<m;r++){
        for(int c=0;c<q;c++){
            printf("%d ",rec[r][c]);
        }
        printf("\n");
    }
}
else{
    printf ("this is not a matrix");
    return 0;
}

    return 0;
}