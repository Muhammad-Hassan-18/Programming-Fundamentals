#include <stdio.h>

int main() {
    int arr[6] = {45, 60, 35, 50, 28, 55};
    int *p = arr;
    int highest = *(p + 0);
    int i;

    printf("Original marks:\n");
    for (i = 0; i < 6; i++)
        printf("Student %d: %d\n", i + 1, *(p + i));

    for (i = 1; i < 6; i++) {
        if (*(p + i) > highest)
            highest = *(p + i);
    }

    printf("\nHighest mark: %d\n", highest);

    for (i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    printf("\nScaled marks:\n");
    for (i = 0; i < 6; i++)
        printf("Student %d: %d\n", i + 1, *(p + i));

    return 0;
}
