#include <stdio.h>

// Require 64bit integers in order to store information.
#define ulong unsigned long long int

ulong largestPrimeDivisor(ulong n) {
    ulong largestPrimeDivisor = n;

    for (ulong i = 2; i < largestPrimeDivisor; i++) {
        while (largestPrimeDivisor % i == 0) {
            largestPrimeDivisor /= i;
        }
    }

    return largestPrimeDivisor;
}

int main(void) {
    ulong n = 600851475143;

    ulong primeDivisor = largestPrimeDivisor(n);

    printf("%llu\n", primeDivisor);

    return 0;
}