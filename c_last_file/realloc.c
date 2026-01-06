#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*) malloc(10* sizeof(int));
    printf("%p\n",ptr);
    ptr = realloc(ptr,40000*4);
    printf("%p\n",ptr);
    return 0;
}