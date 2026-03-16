#include <stdio.h>

int main() {
    float a[3][3], t[3][3], c[3][3], adj[3][3], inv[3][3];
    int i, j;
    float det;

    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // 1. Transpose
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            t[i][j] = a[j][i];
        }
    }

    // 2. Determinant
    det = a[0][0]*((a[1][1]*a[2][2]) - (a[1][2]*a[2][1])) -
          a[0][1]*((a[1][0]*a[2][2]) - (a[1][2]*a[2][0])) +
          a[0][2]*((a[1][0]*a[2][1]) - (a[1][1]*a[2][0]));

    // 3. Cofactor
    c[0][0] = ((a[1][1]*a[2][2]) - (a[1][2]*a[2][1]));
    c[0][1] = -((a[1][0]*a[2][2]) - (a[1][2]*a[2][0]));
    c[0][2] = ((a[1][0]*a[2][1]) - (a[1][1]*a[2][0]));
    c[1][0] = -((a[0][1]*a[2][2]) - (a[0][2]*a[2][1]));
    c[1][1] = ((a[0][0]*a[2][2]) - (a[0][2]*a[2][0]));
    c[1][2] = -((a[0][0]*a[2][1]) - (a[0][1]*a[2][0]));
    c[2][0] = ((a[0][1]*a[1][2]) - (a[0][2]*a[1][1]));
    c[2][1] = -((a[0][0]*a[1][2]) - (a[0][2]*a[1][0]));
    c[2][2] = ((a[0][0]*a[1][1]) - (a[0][1]*a[1][0]));

    // 4. Adjoint
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            adj[i][j] = c[j][i];
        }
    }

    // --- PRINTING ALL STAGES ---

    printf("\nTranspose:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) printf("%.0f ", t[i][j]);
        printf("\n");
    }

    printf("\nDeterminant: %.0f\n", det);

    printf("\nCofactor Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) printf("%.0f ", c[i][j]);
        printf("\n");
    }

    printf("\nAdjoint Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) printf("%.0f ", adj[i][j]);
        printf("\n");
    }

    // 5. Inverse
    if(det != 0) {
        printf("\nInverse:\n");
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                inv[i][j] = adj[i][j] / det;
                printf("%.2f ", inv[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nInverse does not exist (Determinant is 0).\n");
    }

    return 0;
}
