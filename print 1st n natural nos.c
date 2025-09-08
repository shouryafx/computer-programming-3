#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
