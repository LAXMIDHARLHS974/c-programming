#include<stdio.h>

int main(){
    int marks[10] ={98,56,87,87,87,34,32,23,76,90};
    for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf("student's marks %d and indexnum %d\n",marks[i],i);
    }
}
    return 0;
}