#include<stdio.h>

int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
    printf("Entar a number%d :",i+1);
    scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++){
    printf("%d",arr[i]);
}
printf("\n");
for(int i=4;i>=0;i--){
    printf("reverce number  %d\n",arr[i]);
}
    return 0;
}