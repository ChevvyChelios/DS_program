#include<stdio.h>
#define MAX 10

void display(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtEnd(int arr[], int *size){
    int element, i;
    printf("Enter the element to be inserted at the END: ");
    scanf("%d", &element);

    if (*size < MAX){
        arr[*size] = element;
        (*size)++;
    } else {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    printf("Array after inserting %d at the end: ", element);
    display(arr, *size);
}

void insertAtLocation(int arr[], int *size){
    int element, loc, i;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the location: ");
    scanf("%d", &loc);

    if (*size < MAX) {
        if (loc >= 0 && loc <= *size) {
            for (i=*size; i>loc; i--){
                arr[i] = arr[i-1];
            }
            arr[loc] = element;
            (*size)++;
        } else {
            printf("Invalid location. Cannot insert element.\n");
            return;
        }
    } else {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    printf("Array after inserting %d at index %d: ", element, loc);
    display(arr, *size);
}

int main(){
    int arr[MAX], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the values: \n");
    for (i = 0; i < size; i++){
        // printf("Enter value %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    display(arr, size);

    insertAtEnd(arr, &size);

    insertAtLocation(arr, &size);

    return 0;
}