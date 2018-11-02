#include <stdio.h>
#define SIZE 5

void salary_sum(const int *A, const int *B, int *C, int size) {
	int i;
	for(i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

int main(void) {
	int a[SIZE] = { 200, 300, 400, 500, 600 };
	int b[SIZE] = { 30, 60, 90, 120, 150 };
	int c[SIZE];
	int i;

	salary_sum(a, b, c, SIZE);
	for(i = 0; i < SIZE; i++)
		printf("c[%d]  %d\n", i, c[i]);

	return 0;
}
