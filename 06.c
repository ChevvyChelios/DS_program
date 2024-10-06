#include<stdio.h>
#define MAX 20

void display(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size){
    int i,j, temp;

    for (i=0; i<size-1; i++){
        for (j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size) {
    int i, j, key;
    for (i=1; i<size; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    for (i=0; i<size-1; i++) {
        minIndex = i;

        for (j=i+1; j<size; j++) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){

    int arr[MAX], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // int arb[] = {1,2,3,4,5};
    // int si =  sizeof(arb)/sizeof(arb[0]);
    // printf("%d\n", si);

    printf("Enter the values: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    display(arr, size);

    // bubbleSort(arr, size);
    // insertionSort(arr, size);
    selectionSort(arr, size);
    printf("After Sorting: ");
    display(arr, size);

    return 0;
}