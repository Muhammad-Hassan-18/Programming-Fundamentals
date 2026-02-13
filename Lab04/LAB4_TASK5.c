#include <stdio.h>

int main() {
    // Start with initial balance
    int balance = 10000;
    int choice;
    int amt;

    // Loop to keep showing menu until Exit is chosen
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Balance Inquiry\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance: %d\n", balance);
                break;
                
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amt);
                if(amt > balance) {
                    printf("Insufficient Balance\n");
                } else if(amt < 0) {
                    printf("Invalid Amount\n");
                } else {
                    balance = balance - amt;
                    printf("Withdraw Successful. New Balance: %d\n", balance);
                }
                break;
                
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amt);
                if(amt < 0) {
                    printf("Invalid Amount\n");
                } else {
                    balance = balance + amt;
                    printf("Deposit Successful. New Balance: %d\n", balance);
                }
                break;
                
            case 4:
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid Choice\n");
        }
        
    } while(choice != 4);

    return 0;
}
