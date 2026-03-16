#include <stdio.h>

int main() {
    int a[4][3] = {
        {80, 75, 90},
        {60, 70, 85},
        {88, 92, 79},
        {55, 65, 70}
    };
    int i, j, sum;
    float avg;

    for(i=0; i<4; i++) {
        sum = 0;
        for(j=0; j<3; j++) {
            sum += a[i][j];
        }
        printf("Student %d total marks: %d\n", i+1, sum);
    }

    printf("\n");

    for(j=0; j<3; j++) {
        sum = 0;
        for(i=0; i<4; i++) {
            sum += a[i][j];
        }
        avg = sum / 4.0;
        printf("Subject %d average: %.2f\n", j+1, avg);
    }

    return 0;
}
