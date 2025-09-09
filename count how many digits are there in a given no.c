#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle case when number is 0
    if (num == 0)
        count = 1;
    else {
        if (num < 0)  // If negative, make it positive
            num = -num;

        while (num > 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
