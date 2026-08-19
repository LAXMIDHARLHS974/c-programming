#include <stdio.h>
#include <string.h>

int login(char *username, char *password) {
    char query[200];

    sprintf(query, "SELECT * FROM users WHERE username='%s'", username);

    printf("%s\n", query);

    return 1;
}

int main() {
    login("admin", "test123");
    return 0;
}