#include <stdio.h>

// Function prototype for matmult
void matmult(double A[5][3], double B[3][4], double C[5][4]);

int main() {
    // Define dimensions
    int n = 5, p = 3, q = 4;

    // Declare and initialize matrices A, B, and C
    double A[5][3];
    double B[3][4];
    double C[5][4];

    // Initialize matrix A (A[i][j] = i + j)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize matrix B (B[i][j] = i - j)
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Initialize matrix C to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Call matmult to calculate C = A * B
    matmult(A, B, C);

    // Print matrices A, B, and C
    printf("Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%6.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (Result of A * B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
