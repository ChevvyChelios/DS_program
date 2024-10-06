#include<stdio.h>
#define MAX 10

void display(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteFromEnd(int arr[], int *size){
    if (*size > 0){
        (*size)--;
    } else {
        printf("Array is empty\n");
    }

    printf("Array after deleting element from the end: ");
    display(arr, *size);
}

void deleteFromLocation(int arr[], int *size){
    int loc, i;
    printf("Enter the location of the element to be deleted: ");
    scanf("%d", &loc);

    if (*size > 0 && loc >=0 && loc < *size) {
        for (i=loc; i<*size-1; i++){
            arr[i] = arr[i+1];
        }
        (*size)--;
    } else {
        printf("Invalid locationLocation should be between 0 and %d.\n", *size - 1);
    }

    printf("Array after deleting element at loc %d: ", loc);
    display(arr, *size);
}

int main(){
    int arr[MAX], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the values: \n");
    for (i = 0; i < size; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    display(arr, size);

    deleteFromEnd(arr, &size);

    deleteFromLocation(arr, &size);

    return 0;
}