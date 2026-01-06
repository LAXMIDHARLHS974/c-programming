#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date f,s;

    f.day=21;
    f.month=11;
    f.year=2004;

    s.day=30;
    s.month=11;
    s.year=1994;

    bool flag=true;
    if(f.day!=s.day)flag=false;
    if(f.month!=s.month)flag=false;
    if(f.year!=s.year)flag=false;

    if(flag==true){
        printf("the date are same ");
    }
    else{
        printf("the date are different ");
    }
    return 0;
}