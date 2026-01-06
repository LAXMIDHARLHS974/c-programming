#include<stdio.h>
#include<string.h> // Include for strcpy

int main(){
    struct pokemon{
        int hp;
        float speed;
        char power[90];
    };
    struct pokemon pikachu;
    struct pokemon dog;

    pikachu.hp=1500;
    strcpy(pikachu.power, "electric"); // Correct way to assign a string
    pikachu.speed=500.34;

    dog.hp=1200;
    strcpy(dog.power, "meat"); // Correct way to assign a string
    dog.speed=600.7;
    printf("Pikachu's HP: %d\n", pikachu.hp); // Correct format specifier for int
    
    return 0;
}