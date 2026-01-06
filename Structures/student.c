#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct student{
    int rollno;
    char name[54];
    char course[54];
    char Department[54];
    int year;
} student;

void check(student s1 ,student s2){
    bool flag=true;
    if(s1.rollno != s2.rollno) flag=false;
    if(strcmp (s1.name, s2.name) !=0)flag=false;
    if(strcmp (s1.course, s2.course) !=0) flag=false;
    if(strcmp (s1.Department, s2.Department) !=0) flag=false;
    if(s1.year != s2.year) flag=false;

    if(flag==true){
        printf("the data are same ");
    }
    else{
        printf("the data are different ");
    }
    return;
}

int main(){
    student s1,s2;
    s1.rollno=25;
    strcpy(s1.name,"Aditya");
    strcpy(s1.course,"Bca");
    strcpy(s1.Department,"school of computer");
    s1.year=2025;
    
    s2.rollno=25;
    strcpy(s2.name,"Aditya");
    strcpy(s2.course,"Bca");
    strcpy(s2.Department,"school of computer");
    s2.year=2025;

    check(s1,s2);
    return 0;
}