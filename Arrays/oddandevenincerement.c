#include<stdio.h>

int main(){
    int i;
    int arr[7]={2,3,6,5,7,9,4};
    for(i=0;i<=6;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
        for(i=0;i<=6;i++){
        printf("the value %d\n",arr[i]);  
    }



           //      WE CAN WRITE THIS TYPE



    // int i;
    // int arr[7]={2,3,6,5,7,9,4};
    // for(i=0;i<=6;i++){
    //     if(arr[i]%2!=0){
    //         printf("ODD NUMBER :%d",arr[i]*2);
    //     }
    //     else{
    //         printf("EVEN NUMBER :%d",arr[i]+10);
    //     }
    // }
    return 0;
}