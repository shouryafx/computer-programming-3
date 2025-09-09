#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
