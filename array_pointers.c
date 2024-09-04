
#include<stdio.h>
int main(){
    int num[4] = {25, 1, 32, 100};
    int i;
    for ( i=0; i<4; i++)
        printf("%d\t", &num[i]);

    printf("\n");

    printf("%lu\n", sizeof(num));
    printf("%p\n", num);
    printf("%p\n", &num[0]);
    printf("%d\n", *num);
    printf("%d\n", *(num + 1));
    printf("%d", *(num + 2));

    printf("\n");
    return 0;
}