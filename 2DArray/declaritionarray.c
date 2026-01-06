#include<stdio.h>

int main(){
    //type 1
    // int arr[2][3];
    // arr[0][0]=2;
    // arr[0][1]=4;
    // arr[0][2]=6;
    // arr[1][0]=1;
    // arr[1][1]=3;
    // arr[1][2]=5;
    // for(int r=0;r<=1;r++){
    //     for (int c=0;c<=2;c++){
    //         printf("%d",arr[r][c]);
    //     }
    //     printf("\n");
    // }

//type 2

    // int arr[2][3]={{2,4,6},{1,3,5}};
    // for(int r=0;r<=1;r++){
    //     for (int c=0;c<=2;c++){
    //         printf("%d",arr[r][c]);
    //     }
    //     printf("\n");
    // }

    //user input value
//    int arr[3][3];
//     for(int r=0;r<3;r++){
//         for (int c=0;c<3;c++){
//             printf("Enter numbers :");
//             scanf("%d",&arr[r][c]);
//         }
//     }
//     for(int r=0;r<3;r++){
//         for (int c=0;c<3;c++){
//             printf("%d ",arr[r][c]);
//         }
//         printf("\n");
//     }

    //user input matrix

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
    return 0;
}