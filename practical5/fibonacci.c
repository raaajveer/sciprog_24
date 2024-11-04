
#include <stdio.h>

void fibonacci_step(int *f1, int *f2)
{
    int temp = *f2;
    *f2 = *f2 + *f1;
    *f1 = temp;
}

int main() {
    int n;

    l1 : printf("\nEnter the value of n: ");
    scanf("%d", &n);

    int f1 = 0;
    int f2 = 1;

    if (n < 1){
    printf("The value of n should be greater than or equal to 1");
    goto l1;
    }

    printf("Fibonacci series up to %d:\n", n);
    
    if (n >= 1) {
        printf("%d ", f1);
    }
    
    if (n >= 2) {
        printf("%d ", f2);
    }

    for (int i = 3; i <= n; i++) {
        fibonacci_step(&f1, &f2);
        printf("%d ", f2);
    }

    printf("\n");
    return 0;
}
