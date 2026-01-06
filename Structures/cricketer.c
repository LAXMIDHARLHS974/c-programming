#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Cricketer{
        char name[40];
        int age;
        int nummatch;
        float avrun;
    }cricketer;
    cricketer player[2];
    for(int n=0;n<2;n++){
        printf("Enter cricketers name : ");
        scanf("%s",player[n].name);
        printf("Enter cricketers age : ");
        scanf("%d",&player[n].age);
        printf("Enter cricketers number of matches : ");
        scanf("%d",&player[n].nummatch);
        printf("Enter cricketers avarge : ");
        scanf("%f",&player[n].avrun);
        printf("\n");
    }
    for(int n=0;n<2;n++){
        printf("Name : %s\n",player[n].name);
        printf("Age : %d\n",player[n].age);
        printf("No of Matches : %d\n",player[n].nummatch);
        printf("Avearge number : %f\n",player[n].avrun);
        printf("\n");
    }

    return 0;
}