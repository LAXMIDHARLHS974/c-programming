#include<stdio.h>
int main(){
    // FILE* ptr = fopen("text.txt","r");
    // char str[500];
    // while(fgets(str,500,ptr)!=NULL)
    // printf("%s",str);

    FILE* ptr = fopen("lhs.txt","w");
    char str[] = "My name destoyer ";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}