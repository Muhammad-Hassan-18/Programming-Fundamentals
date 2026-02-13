#include <stdio.h>

int main() {
    
    float att; 
    printf("Enter attendance percentage: ");
    scanf("%f", &att);
    
    if(att >= 75) {
        printf("Selected for Tournament\n");
    } else {
        printf("Not Selected\n");
    }
    return 0;
}
