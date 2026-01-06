#include<stdio.h>
#include<string.h>
int main(){
    char str[45]="laxmidhar";
    printf("%s\n",str);
    for(int i=8;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='l';
    printf("%s\n",str);
    

    return 0;
}