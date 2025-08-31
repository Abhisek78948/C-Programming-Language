#include <stdio.h>

int main() {
    int base = 2, exp = 3;
    int result = 1;

    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }

    printf("%d ",result);

    return 0;
}
