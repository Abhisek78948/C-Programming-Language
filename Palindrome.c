#include <stdio.h>

int main() {
    int num = 121;
    int rev = 0, temp, digit;

    temp = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (temp == rev)
        printf("%d is a Palindrome\n", temp);
    else
        printf("%d is NOT a Palindrome\n", temp);

    return 0;
}
