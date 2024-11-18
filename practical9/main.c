#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int main() {
    FILE *f;
    char filename[MAX_FILE_NAME];
    int n = 3;

    printf("Enter file name: ");
    scanf("%s", filename);

    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Failed to open file %s.\n", filename);
        return 1;
    }


    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is NOT a magic square.\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    fclose(f);

    return 0;
}

