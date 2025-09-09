#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j;
    bool isPrime;

    printf("Prime numbers between 1 and 500 are:\n");

    for (i = 2; i <= 500; i++) {
        isPrime = true;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
