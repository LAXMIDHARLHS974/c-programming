#include<stdio.h>
#include<string.h>

int main(){
    char str[60];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    
    // int size=0;
    // int k=0;
    // while(str[k]!='\0'){
    //     size++;
    //     k++;
    // }

           //OR

           
    int size=strlen(str);
    printf("You entered string size is %d\n",size);

    for(int i=0, j=size-1; i < j; i++, j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("The reverse string is : %s\n",str);
    return 0;
}