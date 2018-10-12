#include <stdio.h>

#define SIZE 3
//#define ORIGIN

void transpose(int a[][SIZE], int b[][SIZE]) {
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++)
            b[j][i] = a[i][j];
    }
}

int main(void) {
    int mat[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1},
    };
    int mat_result[SIZE][SIZE];
    int i, j;

    transpose(mat, mat_result);

#ifdef ORIGIN
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);        
        }
        printf("\n");
    }
    printf("\n");
#endif

    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%d ", mat_result[i][j]);        
        }
        printf("\n");
    }
    return 0;
}