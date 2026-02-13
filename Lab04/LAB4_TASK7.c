#include <stdio.h>

int main() {
    float total_amount;
    float final_payable;
    float discount;


    printf("Enter total purchase amount: ");
    scanf("%f", &total_amount);

    
    if (total_amount >= 5000) {
        
        discount = total_amount * 0.20;
        final_payable = total_amount - discount;
        printf("20%% Discount Applied.\n");
    }
    else if (total_amount >= 3000) {
        
        discount = total_amount * 0.10;
        final_payable = total_amount - discount;
        printf("10%% Discount Applied.\n");
    }
    else {
        
        discount = 0;
        final_payable = total_amount;
        printf("No Discount.\n");
    }

    
    printf("Original Amount: %.2f\n", total_amount);
    printf("Discount Amount: %.2f\n", discount);
    printf("Final Payable: %.2f\n", final_payable);

    return 0;
}
