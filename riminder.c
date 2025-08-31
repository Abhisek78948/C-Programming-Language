#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error! Division by zero.\n");
    } else {
        remainder = dividend - (divisor * (dividend / divisor));
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}
