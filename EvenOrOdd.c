#include <stdio.h>
int main() {
    int num = 5;
    char *result;

    result = (num % 2 == 0) ? "Even" : "Odd";

    printf("%d is %s\n", num, result);
    return 0;
}
