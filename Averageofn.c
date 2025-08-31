#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    float average;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
