#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int l=2;l<=x;l++){
        fact=fact*l;
    }
    return fact;
}
int main(){
int n,r;//use function
    printf("Enter number of n :");
    scanf("%d",&n);
    printf("Enter number of r :");
    scanf("%d",&r);
    int nfact=factorial (n);
    int rfact=factorial (r);
    int nrfact=factorial (n-r);
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);

    return 0;
}