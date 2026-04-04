#include <stdio.h>

int main() {
    void *sensor;

    int vibrations = 847;
    float temperature = 73.6;
    char status = 'W';

    sensor = &vibrations;
    printf("Vibration: %d vps\n", *(int *)sensor);
    printf("Address: %p\n", (void *)sensor);

    sensor = &temperature;
    printf("\nTemperature: %.1f C\n", *(float *)sensor);
    printf("Address: %p\n", (void *)sensor);

    sensor = &status;
    printf("\nStatus Code: %c\n", *(char *)sensor);
    printf("Address: %p\n", (void *)sensor);

    printf("\n=== Status Alert ===\n");
    if (*(char *)sensor == 'N')
        printf("All systems normal.\n");
    else if (*(char *)sensor == 'W')
        printf("Warning! Check sensor readings.\n");
    else if (*(char *)sensor == 'C')
        printf("CRITICAL! Immediate action required.\n");

    return 0;
}
