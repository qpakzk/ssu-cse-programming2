#include <stdio.h>
#define SIZE 3

void cal(int *num, int size, int *sum, int *mul) {
	int i;

	for(i = 0; i < size; i++)
		*sum += num[i];
	for(i = 0; i < size; i++)
		*mul *=	num[i];
}

int main(void) {
	int num[SIZE] = {100, 200, 400};
	int sum = 0, mul = 1;

	cal(num, SIZE, &sum, &mul);

	printf("원소들의 합=%d\n", sum);
	printf("원소들의 곱=%d\n", mul);
	return 0;
}
