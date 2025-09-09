#include <stdio.h>
int main() {
    int i, num, largest, smallest;
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;
    for (i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest)
            largest = num;

        if (num < smallest)
            smallest = num;
    }

    printf("\nLargest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
