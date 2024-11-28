#include <stdio.h>

int main() {
    int arr[] = {2, 5, 1, 6, 4};
    int i;

    printf("Original array : ");
    for (i = 0; i < 5; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");

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