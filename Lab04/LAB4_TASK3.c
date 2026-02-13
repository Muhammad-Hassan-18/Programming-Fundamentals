#include <stdio.h>

int main() {
	int bal;
    printf("\nEnter account balance: ");
    scanf("%d", &bal);
    
    if(bal > 0) {
        printf("Positive Balance\n");
    }
    else if(bal < 0) {
        printf("Overdrawn\n");
    }
    else {
        printf("Zero Balance\n");
    }

    return 0;
}
