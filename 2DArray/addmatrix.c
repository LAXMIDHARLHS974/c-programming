#include<stdio.h>

int main(){
    // int arr[2][2]={{1,3},{5,7}};//using thired variable
    // int lrr[2][2]={{2,4},{6,8}};
    // int res[2][2];
    // for(int r=0;r<2;r++){
    //     for(int c=0;c<2;c++){
    //         res[r][c]=arr[r][c]+lrr[r][c];
    //     }
    // }
    // for(int r=0;r<2;r++){
    //     for(int c=0;c<2;c++){
    //         printf("%d ",res[r][c]);
    //     }
    //     printf("\n");
    // }

    int arr[2][2]={{1,3},{5,7}};//without using thired variable
    int lrr[2][2]={{2,4},{6,8}};
    int res[2][2];
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            arr[r][c]=arr[r][c]+lrr[r][c];
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}