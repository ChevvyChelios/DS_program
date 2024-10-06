
#include<stdio.h>

int linearSearch(int arr[], int size, int target){
    int i;
    for(i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int result = linearSearch(arr, 5, target);

    if (result != -1){
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}