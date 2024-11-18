#include <stdio.h>
#include <stdlib.h>

int* allocatearray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    return arr;
}

void fillwithones(int* arr, int size) {
    if (arr == NULL) return;
    for (int i = 0; i < size; i++) {
        arr[i] = 1;
    }
}

void printarray(int* arr, int size) {
    if (arr == NULL) return;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void freearray(int* arr) {
    free(arr);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array = allocatearray(size);
    if (array == NULL) return 1;

    fillwithones(array, size);
    printf("Array elements: ");
    printarray(array, size);

    freearray(array);
    return 0;
}
