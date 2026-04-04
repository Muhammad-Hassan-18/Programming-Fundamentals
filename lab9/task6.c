#include <stdio.h>

float totalRevenue(float bills[], int n) {
    float sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum = sum + bills[i];
    return sum;
}

int bestTable(float bills[], int n) {
    int maxIdx = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (bills[i] > bills[maxIdx])
            maxIdx = i;
    }
    return maxIdx;
}

int isProfitable(float total) {
    if (total > 10000)
        return 1;
    else
        return 0;
}

int main() {
    float bills[5];
    int i;

    printf("Enter bill amounts for 5 tables:\n");
    for (i = 0; i < 5; i++) {
        printf("Table %d: Rs. ", i + 1);
        scanf("%f", &bills[i]);
    }

    float total = totalRevenue(bills, 5);
    int best = bestTable(bills, 5);
    int profit = isProfitable(total);

    printf("\n=== Closing Summary ===\n");
    printf("Total Revenue: Rs. %.2f\n", total);
    printf("Best Table: Table %d (Rs. %.2f)\n", best + 1, bills[best]);

    if (profit == 1)
        printf("Verdict: Profitable night!\n");
    else
        printf("Verdict: Not profitable.\n");

    return 0;
}
