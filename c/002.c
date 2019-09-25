#include <stdio.h>
#include <stdlib.h>

int *fibGenerator(int n) {
    int *fib = malloc(sizeof(int) * n);
    
    if (n < 2) {
        return NULL;
    }

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib;
}

int main(void) {
    int n = 10000, bound = 4000000;
    int *fib = fibGenerator(n);

    // Runs through the even Fibonacci numbers; terminating once the bound is hit.
    int sum = 0, i = 0;
    while (fib[i] <= bound) {
        if (fib[i] % 2 == 0) {
            sum += fib[i];
        }
        i++;
    }

    printf("%d\n", sum);

    // Don't forget to free up memory allocated.
    free(fib);

    return 0;
}