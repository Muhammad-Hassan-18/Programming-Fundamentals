#include <stdio.h>

float triageScore(int severity, int age, int vitals) {
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}

int main() {
    int s, a, v;
    float score;

    printf("Enter severity score (1-10): ");
    scanf("%d", &s);
    printf("Enter age risk factor (1-10): ");
    scanf("%d", &a);
    printf("Enter vitals stability (1-10): ");
    scanf("%d", &v);

    score = triageScore(s, a, v);

    printf("Triage Score: %.2f\n", score);

    if (score > 7.0)
        printf("Immediate attention required\n");
    else if (score >= 4.0 && score <= 7.0)
        printf("Moderate priority\n");
    else
        printf("Can wait\n");

    return 0;
}
