#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 5; i++) {
        printf("%d %d\n", i, 6 - i);
    }
    return 0;
}
