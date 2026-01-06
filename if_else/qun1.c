#include<stdio.h>

int main(){
    int ram,gopal,hari;

    printf("Enter age : ");
    scanf("%d",&ram);

    printf("Enter age : ");
    scanf("%d",&gopal);

    printf("Enter age : ");
    scanf("%d",&hari);

    if(ram>gopal){
        if(ram>hari){
            printf("ram is grater then gopal and hari\n");
        }
        else{
            printf("hari is grater then gopal and ram\n");
        }
    }
    else{
        if(gopal>hari){
            printf("gopal is grater then ram and hari\n");
        }
        else{
            printf("hari is grater then gopal and ram\n");
        }
    }

    return 0;
}