#include <stdio.h>
int main() {
    int i, j, is_prime;

    printf("Prime numbers till 100 are :\n");

    // Loop through numbers from 2 to 100
    for (i = 2; i <= 100; ++i) {
        // Assume the number is prime
        is_prime = 1;

        // Check if the number is divisible by any number other than 1 and itself
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        // If the number is prime, print it
        if (is_prime)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
