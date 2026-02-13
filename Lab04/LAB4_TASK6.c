#include <stdio.h>

int main() {
    
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("\n--- Scholarship Evaluation ---\n");

   
    printf("Enter marks for Subject 1: ");
    scanf("%f", &s1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &s2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &s3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &s4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &s5);

    
    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;

    
    printf("\n----------------------------\n");
    printf("Total Marks: %.2f / 500.00\n", total);
    printf("Percentage: %.2f%%\n", percentage);


    if (percentage >= 85) {
        printf("Status: Full Scholarship Awarded\n");
    }
    else if (percentage >= 70) {
        printf("Status: Partial Scholarship Awarded\n");
    }
    else if (percentage >= 50) {
        printf("Status: Eligible for Consideration\n");
    }
    else {
        printf("Status: Not Eligible\n");
    }

    return 0;
}
