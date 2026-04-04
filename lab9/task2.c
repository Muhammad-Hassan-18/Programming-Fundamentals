#include <stdio.h>

float applyDiscount(float price, int tier) {
    float discounted;

    if (tier == 1)
        discounted = price - (price * 0.05);
    else if (tier == 2)
        discounted = price - (price * 0.10);
    else if (tier == 3)
        discounted = price - (price * 0.20);
    else if (tier == 4)
        discounted = price - (price * 0.30);
    else
        discounted = price;

    return discounted;
}

void printInvoice(float original, float discounted) {
    float delivery = 0;
    float total;

    printf("\n===== INVOICE =====\n");
    printf("Original Price:  Rs. %.2f\n", original);
    printf("Discount:        Rs. %.2f\n", original - discounted);

    if (discounted < 2000) {
        delivery = 150;
        printf("Delivery Charge: Rs. %.2f\n", delivery);
    } else {
        printf("Delivery Charge: Rs. 0.00\n");
    }

    total = discounted + delivery;
    printf("Final Total:     Rs. %.2f\n", total);
    printf("===================\n");
}

int main() {
    float price;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &price);
    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    float discounted = applyDiscount(price, tier);
    printInvoice(price, discounted);

    return 0;
}
