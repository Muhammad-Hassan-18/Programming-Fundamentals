#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2;
    int num1_int, num2_int; 

    printf("\n--- Math Operations Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root\n");
    printf("8. Power\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &num1);
            printf("Result: %.2f\n", num1 * num1);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            printf("Result: %.2f\n", num1 * num1 * num1);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%f", &num1);
            if(num1 < 0) {
                printf("Error: Cannot calculate square root of negative number.\n");
            } else {
                printf("Result: %.2f\n", sqrt(num1));
            }
            break;

        case 8:
            printf("Enter base and power: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", pow(num1, num2));
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%f", &num1);
            if(num1 < 0) {
                printf("Result: %.2f\n", -num1);
            } else {
                printf("Result: %.2f\n", num1);
            }
            break;

        case 10:
            printf("Enter two integers for modulus: ");
            scanf("%d %d", &num1_int, &num2_int);
            if(num2_int == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1_int % num2_int);
            }
            break;

        default:
            printf("Invalid choice. Please select 1-10.\n");
    }

    return 0;
}
