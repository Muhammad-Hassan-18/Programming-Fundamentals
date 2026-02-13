#include <stdio.h>
float gb;
int main () {

    printf("\nEnter total GB used: ");
    scanf("%f", &gb);
    
    if(gb <= 50) {
        printf("Basic User\n");
    }
    else if(gb <= 150) {
        printf("Standard User\n");
    }
    else {
        printf("Heavy User\n");
    }
    return 0;
}
