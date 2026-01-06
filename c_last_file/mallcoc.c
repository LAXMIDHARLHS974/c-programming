#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a no of intiger you want : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n * sizeof(int));
    int* p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
printf("\n");
    for(int i=1;i<=n;i++){
        printf("%d\n",(*p));
        p++;
    }
    return 0;
}