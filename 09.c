
#include<stdio.h>

void display(int row, int col,int matrix[row][col]){
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void addMatrix(int row, int col, int mat1[row][col], int mat2[row][col], int result[row][col]){
    int i, j;
    for(i = 0; i < row; i++) {
        for (j=0; j<col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main(){
    int i, j, row, col;

    printf("Enter the size of the matrix: ");
    scanf("%d %d",&row, &col);

    int mat1[row][col], mat2[row][col];
    int result[row][col];

    // printf("%d %d\n",row, col);
    printf("Enter the values of matrix 1: ");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the values of matrix 2: ");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("Matrix 1: \n");
    display(row, col, mat1);
    printf("Matrix 2: \n");
    display(row, col, mat2);

    addMatrix(row, col, mat1, mat2, result);

    printf("Sum of Matrices: \n");
    display(row, col, result);

    return 0;
}