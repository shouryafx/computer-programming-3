#include <stdio.h>
void main() {
    int i, n, sum = 0,n2;
    float avg;
    printf("enter any number :  ");
    scanf("%d",&n2);
    printf("Input the %d numbers : \n",n2);

    for (i = 1; i <= n2; i++) {
        printf("Number %d : ", i);
        scanf("%d", &n);
        sum += n;
    }

    avg = sum / 10.0;

    printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);
}
