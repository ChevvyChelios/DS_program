#include<stdio.h>
void display(int arr[], int size){
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
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
    display(arr, size);
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
    display(arr, size);
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
    display(arr, size);
}


int main(){
    int array1[] = {34, 12, 5, 78, 23, 45};
    int array2[] = {9, 3, 67, 21, 45, 88};
    int array3[] = {15, 42, 7, 29, 11, 56};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);

    printf("\nOriginal array1: ");
    display(array1, size1);
    printf("Sorted using bubble sort: ");
    bubbleSort(array1, size1);

    printf("\nOriginal array2: ");
    display(array2, size2);
    printf("Sorted using insertion sort: ");
    insertionSort(array2, size2);

    printf("\nOriginal array3: ");
    display(array3, size3);
    printf("Sorted using selection sort: ");
    selectionSort(array3, size3);

    return 0;
}