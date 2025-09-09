#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, square, temp, count = 0, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    // Count digits in num to create divisor
    while (temp > 0) {
        count++;
        temp /= 10;
        divisor *= 10;
    }

    // Check if last digits of square equals num
    if (square % divisor == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}
