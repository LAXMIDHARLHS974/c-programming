#include<stdio.h> 
// int stair(int n){
//     if(n==1)return 1;
//     if(n==2)return 2;
//     int count =stair(n-1)+stair(n-2);
//     return count;
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     printf("%d\n",stair(n));
//     return 0;
// }





// int stair(int n){
//     if(n<=2)return n;
//     int count =stair(n-1)+stair(n-2);
//     return count;
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     printf("%d\n",stair(n));
//     return 0;
// }


int stair(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    int count =stair(n-1)+stair(n-2)+stair(n-3);
    return count;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d\n",stair(n));
    return 0;
}