#include<stdio.h>

 int main(){
    int i=65;
    while (i<=90) {
        printf("%d ",i);
        char ch =(char)i;
        printf("%c\n",i);
        i++;
    }

    char ch1='a';
    char ch2='z';
     //int x=ch1;
    int y=ch2;
    for (int x=ch1;x<=y;x++) {
        printf("%c ascii is %d\n",x,x);
    }

    char ch;
    for(ch='a';ch<='z';ch++){
        printf("%c   %d\n",ch,ch);
    }
    
    return 0;
}