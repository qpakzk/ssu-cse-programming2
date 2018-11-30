#include <stdio.h>

#define SIZE 3
//#define ORIGIN

void smult(int A[][SIZE], int b, int C[][SIZE]) {
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++)
            C[i][j] = 5 * A[i][j];
    }
}

int main(void) {
    int mat[SIZE][SIZE] = {
        {2, 4, 6},
        {1, 2, 3},
        {5, 7, 9},
    };
    int constant = 5;
    int mat_result[SIZE][SIZE];
    int i, j;
    smult(mat, constant, mat_result);

#ifdef ORIGIN
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%2d ", mat[i][j]);        
        }
        printf("\n");
    }
    printf("\n");
#endif

    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%2d ", mat_result[i][j]);        
        }
        printf("\n");
    }
    return 0;
}