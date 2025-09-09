#include <stdio.h>

int main() {
    int i, num;
    int pos = 0, neg = 0, zero = 0;

    for (i = 1; i <= 200; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
