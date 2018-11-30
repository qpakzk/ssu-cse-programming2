#include <stdio.h>
#define SIZE 10

int get_array_sum(int *A, int size) {
    int total_sum = 0;
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", A[i]);
        total_sum += A[i];
    }

    return total_sum;
}
int main(void) {
    int data[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    printf("\n배열 요소의 합=%d\n", get_array_sum(data, SIZE));
    
    return 0;
}