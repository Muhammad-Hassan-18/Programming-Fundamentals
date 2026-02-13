#include <stdio.h>
#include <string.h>

int main() {
    char u[20];
    int p;
    
    printf("Enter username: ");
    scanf("%s", u);
    printf("Enter password: ");
    scanf("%d", &p);
    
    
    if(strcmp(u, "user") == 0 && p == 7890) {
        printf("Connected Successfully\n");
    } else {
        printf("Connection Failed\n");
    }
    return 0;
}
