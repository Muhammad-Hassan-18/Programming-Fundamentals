#include <stdio.h>

int main() {
    int r, c;
    int a[5][5];
    int i, j, det;
    int sq = 0, zero = 1, iden = 1, diag = 1, scal = 1;
    int up = 1, low = 1, sym = 1, skew = 1;

    printf("Enter rows and columns (max 5x5): ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if(r == c) sq = 1;
    if(r == 1) printf("Row Matrix\n");
    if(c == 1) printf("Column Matrix\n");
    if(sq) printf("Square Matrix\n");
    else printf("Rectangular Matrix\n");

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(a[i][j] != 0) zero = 0;
            if(sq) {
                if(i == j && a[i][j] != 1) iden = 0;
                if(i != j && a[i][j] != 0) {
                    iden = 0;
                    diag = 0;
                    scal = 0;
                }
                if(i == j && a[i][j] != a[0][0]) scal = 0;
                if(i > j && a[i][j] != 0) up = 0;
                if(i < j && a[i][j] != 0) low = 0;
                if(a[i][j] != a[j][i]) sym = 0;
                if(a[i][j] != -a[j][i]) skew = 0;
            }
        }
    }

    if(zero) printf("Zero/Null Matrix\n");
    if(sq) {
        if(diag) printf("Diagonal Matrix\n");
        if(scal) printf("Scalar Matrix\n");
        if(iden) printf("Identity Matrix\n");
        if(up) printf("Upper Triangular Matrix\n");
        if(low) printf("Lower Triangular Matrix\n");
        if(sym) printf("Symmetric Matrix\n");
        if(skew) printf("Skew-Symmetric Matrix\n");
        
        if(r == 1) {
            det = a[0][0];
            if(det == 0) printf("Singular Matrix\n");
            else printf("Non-Singular Matrix\n");
        }
        else if(r == 2) {
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
            if(det == 0) printf("Singular Matrix\n");
            else printf("Non-Singular Matrix\n");
        }
        else if(r == 3) {
            det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) - 
                  a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) + 
                  a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
            if(det == 0) printf("Singular Matrix\n");
            else printf("Non-Singular Matrix\n");
        }
    }

    return 0;
}
