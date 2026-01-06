#include<stdio.h>
#include<string.h>
int main(){
    char str[100]; 
    //scanf("%s",str); //this is only contend first word
    scanf("%[^\n]s",str);
    //gets(str);
    printf("Your input is : %s",str);
}
