#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits separated: ");

    while (num > 0) {
        printf("%d", num % 10);
        num = num / 10;

        if (num > 0)
            printf(", ");
    }

    printf("\n");

    return 0;
}
