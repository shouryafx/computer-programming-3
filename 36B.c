#include <stdio.h>

int main()
{
    int i; // Declare the loop variable

    for(i = 5; i >= 1; i--) {
        printf("%d %d\n", i, 6 - i);
    }

    return 0;
}

