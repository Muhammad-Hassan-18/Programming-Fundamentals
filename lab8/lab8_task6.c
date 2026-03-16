#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[3][3], b[3][3], res[3][3];
    int i, j, k;

    printf("Enter rows and cols for Matrix 1 (max 3): ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and cols for Matrix 2 (max 3): ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Multiplication not possible. Dimensions do not match.\n");
    } else {
        printf("Enter elements for Matrix 1:\n");
        for(i=0; i<r1; i++) {
            for(j=0; j<c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements for Matrix 2:\n");
        for(i=0; i<r2; i++) {
            for(j=0; j<c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        
        for(i=0; i<r1; i++) {
            for(j=0; j<c2; j++) {
                res[i][j] = 0;
                for(k=0; k<c1; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        
        printf("\nMatrix 1:\n");
        for(i=0; i<r1; i++) {
            for(j=0; j<c1; j++) printf("%d ", a[i][j]);
            printf("\n");
        }

        printf("\nMatrix 2:\n");
        for(i=0; i<r2; i++) {
            for(j=0; j<c2; j++) printf("%d ", b[i][j]);
            printf("\n");
        }

        printf("\nResultant Matrix:\n");
        for(i=0; i<r1; i++) {
            for(j=0; j<c2; j++) printf("%d ", res[i][j]);
            printf("\n");
        }
    }

    return 0;
}
