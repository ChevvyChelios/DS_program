#include<stdio.h>
int main(){
    int arr[] = {25, 1, 3, 100};

    printf("%d\n", arr[0]);

    // arr[0] = 33;
    // for (int i=0; i<4; i++)
    //     printf("%d\t", arr[i]);

    int length = sizeof(arr) / sizeof(arr[0]);
    printf("%d", length);

    printf("\n");
    return 0;
}