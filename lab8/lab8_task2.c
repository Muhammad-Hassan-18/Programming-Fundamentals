#include <stdio.h>

int main() {
    int a[5][6] = {
        {0, 1, 0, 0, 1, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 0, 0},
        {0, 1, 0, 1, 0, 0}
    };
    int i, j, avail = 0, booked, maxb = -1, maxr = -1;

    for(i=0; i<5; i++) {
        booked = 0;
        for(j=0; j<6; j++) {
            if(a[i][j] == 0) avail++;
            if(a[i][j] == 1) booked++;
        }
        if(booked > maxb) {
            maxb = booked;
            maxr = i;
        }
    }

    printf("Available seats: %d\n", avail);
    printf("Row with maximum booked seats: %d\n", maxr+1);

    return 0;
}
