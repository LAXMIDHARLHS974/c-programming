#include<stdio.h>

int main(){
    int m;
    printf("enter ram's percentage : ");
    scanf("%d",&m);

    if(m>90){
        printf("Excellent");}
        else if (m>80)
        {
            printf("Very Good");
        }
        else if (m>70)
        {
            printf("Good");
        }
        else if (m>60)
        {
            printf("Can do better");
        }
        else if (m>50)
        {
            printf("Average");
        }
        else if (m>40)
        {
            printf("Below Average");
        }
        else
        {
            printf("fall");
        }
    return 0;
}