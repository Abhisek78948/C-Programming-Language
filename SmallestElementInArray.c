#include <stdio.h>

int main() {
    int arr[] = {25, 11, 7, 75, 56};
    int length = sizeof(arr) / sizeof(arr[0]); 
    int min = arr[0];  

    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    printf("Smallest element in the array is: %d\n", min);
    return 0;
}
