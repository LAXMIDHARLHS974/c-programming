#include<stdio.h>

int main(){    
    int n,r;
    printf("Enter number of n :");
    scanf("%d",&n);
    printf("Enter number of r :");
    scanf("%d",&r);
    int nfact=1,rfact=1,nrfact=1;
    for(int i=1;i<=n;i++){
        nfact=nfact*i;
    }
    for(int j=1;j<=r;j++){
        rfact=rfact*j;
    }
    for(int k=1;k<=n-r;k++){
        nrfact=nrfact*k;
    }
    
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    
    return 0;
}