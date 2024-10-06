#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    int x, pos = 3;
    printf("Insert ele: ");
    scanf("%d", &x);

    for (int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    n++;

    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}