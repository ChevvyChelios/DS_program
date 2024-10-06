#include<stdio.h>

void insertAt(int arr[], int *n, int X, int pos){
    for (int i=*n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = X;
    *n = *n + 1;
}
void insertAtStart(int arr[], int *n, int X){
    insertAt(arr,  n, X, 0);

}

void deleteAt(int arr[], int *n, int pos){
    for (int i=pos; i<*n-1; i++){
        arr[i] = arr[i+1];
    }
    (*n)--;
}
void deleteAtStart(int arr[], int *n){
    deleteAt(arr, n, 0);
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100] = {1,2,3,4,5};
    int n = 5;

    printf("Original Array: ");
    displayArray(arr,n);

    insertAt(arr, &n, 10, 2);
    printf("After inserting 10 at 2: ");
    displayArray(arr,n);

    deleteAt(arr, &n, 4);
    printf("After deleting from 4: ");
    displayArray(arr,n);

    insertAtStart(arr, &n, 20);
    printf("After inserting 20 at start: ");
    displayArray(arr,n);

    deleteAtStart(arr, &n);
    printf("After deleting from start: ");
    displayArray(arr,n);

    printf("\n");

    return 0;
}