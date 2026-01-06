#include<stdio.h>

int main(){
     char gender;
    printf("Enter gender : ");
    scanf("%c",&gender);
    switch (gender) {
    case 'm':
    case 'M':
        printf("MALE");
        break;
    case 'f':
    case 'F':
        printf("FEMALE");
        break;

    default:
        printf("Unspecified Gender");
        break;
    
    }
    return 0;
}
