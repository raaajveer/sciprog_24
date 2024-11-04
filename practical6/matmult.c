#include <stdio.h>

void matmult(double A[5][3], double B[3][4], double C[5][4]) {
    // Multiply matrices A and B and store the result in C
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
