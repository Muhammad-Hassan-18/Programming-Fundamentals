#include <stdio.h>

int main() {
    int attendance[4][5] = {
        {1, 1, 0, 1, 1},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1}
    };
    int (*p)[5] = attendance;
    int i, j, total;

    char *days[] = {"Mon", "Tue", "Wed", "Thu", "Fri"};

    printf("=== Weekly Attendance Report ===\n\n");

    for (i = 0; i < 4; i++) {
        total = 0;
        printf("Student %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            printf("%s=%d ", days[j], (*(p + i))[j]);
            total = total + (*(p + i))[j];
        }

        printf("| Total: %d days", total);

        if (total < 3)
            printf(" -- At risk");

        printf("\n");
    }

    return 0;
}
