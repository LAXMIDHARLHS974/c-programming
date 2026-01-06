#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello World";
    char *ptr = str; // Pointer to the first character of the string

    printf("String using array: %s\n", str);
    printf("String using pointer: %s\n", ptr);

    // Accessing characters using pointer arithmetic
    printf("First character: %c\n", *ptr);
    printf("Second character: %c\n", *(ptr + 1));

    // Iterating through the string using a pointer
    printf("Iterating through string: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
