#include<stdio.h>

int main(){
    int n,i;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the maximum value is %d",max);

    return 0;
}