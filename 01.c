
#include<stdio.h>
int main(){
    int arr[5], i;

    printf("Enter the values: \n");
    for (i = 0; i < 5; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEntered values are: ");
    for (i = 0; i < 5; i++){
        printf(" %d ", arr[i]);
    }

    printf("\n");

    return 0;
}