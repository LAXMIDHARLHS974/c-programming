#include<stdio.h>
int main(){
    int i=1,f;
     f=++i;  //first increment then print
    printf("%d\n",i);
    printf("%d\n",f);


    int k=9,l;
     l=k++;   //first print then increment 
    printf("%d\n",k);
    printf("%d\n",l);

    int a=5,b;
     b=--a;  //first decrement then print
    printf("%d\n",a);
    printf("%d\n",b);


    int c=7,d;
     d=c--;  //first print then decrement
    printf("%d\n",c);
    printf("%d\n",d);


return 0;
}