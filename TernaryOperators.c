#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("%d is Positive\n", num) :
    (num < 0) ? printf("%d is Negative\n", num) :
                printf("The number is Zero\n");

    return 0;
}
