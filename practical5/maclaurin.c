
#include <stdio.h>
#include <math.h>

// Function to approximate arctanh(x) using the Maclaurin series
double arctanh1x(double val, double delta) {
    double series_term = val;  // Starting term (x^1 / 1)
    double total_sum = series_term;
    int count = 1;

    // Add terms until the term is less than tolerance
    while (fabs(series_term) >= delta) {
        series_term = pow(val, 2 * count + 1) / (2 * count + 1);  // Next series term
        total_sum += series_term;
        count++;
    }

    return total_sum;
}

// Function to calculate arctanh(x) using logarithmic properties
double arctanh2x(double val) {
    return 0.5 * (log(1 + val) - log(1 - val));
}

int main() {
    double delta;
    
    // Ask the user for the tolerance level
    printf("Enter a positive tolerance value (delta): ");
    scanf("%lf", &delta);

    // Define range and step for values of x
    double x_min = -0.9;
    double x_max = 0.9;
    double increment = 0.01;
    int points = (int)((x_max - x_min) / increment) + 1;

    // Arrays to hold results from both methods
    double series_results[points];
    double log_results[points];

    // Compute arctanh using both methods for values from -0.9 to 0.9
    int n = 0;
    for (double val = x_min; val <= x_max; val += increment) {
        series_results[n] = arctanh1x(val, delta);  // Series method
        log_results[n] = arctanh2x(val);                  // Logarithmic method
        n++;
    }

    // Print a comparison of results to 10 decimal places
    printf("Results comparison:\n");
    for (int index = 0; index < points; index++) {
        double difference = fabs(series_results[index] - log_results[index]);
        printf("x = %.2f, Series Method = %.10f, Log Method = %.10f, Difference = %.10f\n",
               x_min + index * increment, series_results[index], log_results[index], difference);
    }

    return 0;
}

