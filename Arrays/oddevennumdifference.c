#include<stdio.h>

int main(){
    int i,sumeven=0,sumodd=0;
    int arr[7]={2,3,6,5,7,9,4};
    for(i=0;i<=6;i++){
        if(arr[i]%2==0){
            printf("the even value %d\n",arr[i]+10);
            sumeven=sumeven+arr[i];
        }
        else{
            printf("the odd value %d\n",arr[i]*2);
            sumodd=sumodd+arr[i];
        }
    }
    printf("Even number sum is %d\n",sumeven);
    printf("Odd number sum is %d\n",sumodd);
    int difference =(sumeven-sumodd);
    printf("difference between odd or even %d",difference);
}