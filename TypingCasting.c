#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result1, result2;

    result1 = a / b;
    printf("Without casting (a/b): %f\n", result1);
    result2 = (float)a / b;
    printf("With casting (a/b): %f\n", result2);

    double x = 9.78;
    int y;

    y = (int)x;
    printf("Double value: %lf\n", x);
    printf("After casting to int: %d\n", y);

    return 0;
}
