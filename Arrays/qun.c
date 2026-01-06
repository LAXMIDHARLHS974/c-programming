#include<stdio.h>
int main(){
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     printf("Enter element of %d : ",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=4;i>=0;i--){
    //     printf("%d\n",arr[i]);
    // }

    int marks[10]={98,43,98,32,87,22,54,23,89,35};
        for(int i=0;i<=9;i++){
            if(marks[i]<35){
            printf("%d\n",i);
            }
        }
    return 0;
}