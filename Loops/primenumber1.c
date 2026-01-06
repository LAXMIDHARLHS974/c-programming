#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m = 0;  
    for(int i=2;i<=n/2;i++){
        if (n%i==0) {
        m=1;  
        break;
        }
        }
        if(n==1){
            printf("not prime nor composite ");
        }
        else if (m==0) {
         printf("Prime\n");
        }
        else {
            printf("composite\n");
        }
    return 0;
}