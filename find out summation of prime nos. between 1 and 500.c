#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j, sum = 0;
    bool isPrime;

    for (i = 2; i <= 500; i++) {
        isPrime = true;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            sum += i;
    }

    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);

    return 0;
}
