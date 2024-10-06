#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // declare and initialize an array
    int i;

    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // traverse the array and add 5 to each element
    for (i = 0; i < 5; i++) {
        arr[i] = arr[i] + 5;
    }

    printf("Array after adding 5 to each element: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}