#include <stdio.h>

float toMegajoules(float kwh) {
    return kwh * 3.6;
}

float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845;
}

int main() {
    float kwh;

    printf("Enter energy reading in kWh: ");
    scanf("%f", &kwh);

    float mj = toMegajoules(kwh);
    float btu = toBTU(kwh);
    float cal = toCalories(kwh);

    printf("\n=== Conversion Report ===\n");
    printf("Energy Input: %.2f kWh\n", kwh);
    printf("Megajoules:   %.2f MJ\n", mj);
    printf("BTU:          %.2f BTU\n", btu);
    printf("Calories:     %.2f cal\n", cal);

    printf("\nFunction call chaining demo:\n");
    printf("MJ: %.2f\n", toMegajoules(kwh));

    return 0;
}
