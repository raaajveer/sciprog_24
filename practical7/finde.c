#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double estimate_e(int order) {
    double* terms = (double*)malloc((order + 1) * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    double e_estimate = 1.0;
    terms[0] = 1.0;

    for (int i = 1; i <= order; i++) {
        terms[i] = 1.0 / factorial(i);
        e_estimate += terms[i];  
    }

    free(terms);

    return e_estimate;
}

int main() {
    int order;
    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);

    double e_actual = 2.718282;
    double e_approx;
    
    for (int i = 1; i <= order; i++)
    {
        e_approx = estimate_e(i);
        printf("X: %d\n", i);
        printf("Estimated e: %lf\n", e_approx);
        printf("Difference from actual e: %lf\n\n", e_actual - e_approx); 
    }
    

    return 0;
}

