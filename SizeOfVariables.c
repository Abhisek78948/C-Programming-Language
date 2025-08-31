#include <stdio.h>

int main() {
    int a = 1;
    float b = 5.26;
    char c = 'A';
    double d = 2.71828;

    printf("Size of int is%zu\n",sizeof(a));
    printf("Size of float is%zu\n",sizeof(b));
    printf("size of char is%zu\n",sizeof(c));
    printf("Size of double is %zu\n",sizeof(d));

    return 0;
}