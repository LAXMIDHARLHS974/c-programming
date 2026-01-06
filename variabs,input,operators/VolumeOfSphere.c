#include<stdio.h>

int main() {
    int r;
    printf("Enter a radius = ");
    scanf("%d",&r);
    float v = 4 * 3.14 * r * r * r /3;
    printf("The Volume is = %f\n",v);
    return 0;
}