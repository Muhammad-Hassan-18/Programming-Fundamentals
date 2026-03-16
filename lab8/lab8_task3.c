#include <stdio.h>

int main() {
    int a[7][3] = {
        {30, 35, 28}, {31, 36, 29}, {32, 38, 30},
        {30, 34, 27}, {29, 33, 26}, {31, 37, 28}, {33, 39, 31}
    };
    int i, j, max = a[0][0], sum;
    float avg;

    for(i=0; i<7; i++) {
        sum = 0;
        for(j=0; j<3; j++) {
            if(a[i][j] > max) max = a[i][j];
            sum += a[i][j];
        }
        avg = sum / 3.0;
        printf("Day %d average temperature: %.2f\n", i+1, avg);
    }

    printf("\nHighest temperature in the week: %d\n", max);

    return 0;
}
