#include <stdio.h>

int validatePIN(int storedPIN, int enteredPIN) {
    if (storedPIN == enteredPIN)
        return 1;
    else
        return 0;
}

int main() {
    int storedPIN = 4729;
    int entered;
    int i;

    printf("=== ATM Login ===\n");

    for (i = 0; i < 3; i++) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered);

        if (validatePIN(storedPIN, entered) == 1) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            printf("Wrong PIN. %d attempt(s) remaining.\n", 2 - i);
        }
    }

    if (i == 3) {
        printf("Card blocked. Contact your bank.\n");
    }

    return 0;
}
