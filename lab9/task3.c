#include <stdio.h>

int totalRuns(int arr[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > avg)
            count++;
    }
    return count;
}

int main() {
    int scores[10];
    int i, total, highest, above;
    float avg;

    printf("Enter runs scored in 10 matches:\n");
    for (i = 0; i < 10; i++) {
        printf("Match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    total = totalRuns(scores, 10);
    avg = (float)total / 10;
    highest = highestScore(scores, 10);
    above = aboveAverage(scores, 10, avg);

    printf("\n=== Performance Report ===\n");
    printf("Total Runs: %d\n", total);
    printf("Average Runs: %.2f\n", avg);
    printf("Highest Score: %d\n", highest);
    printf("Matches Above Average: %d\n", above);

    return 0;
}
