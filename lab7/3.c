#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}
int main(void) {
	int num1, num2;
	int sum, diff;

	printf("합과 차를 할 두 정수 입력 : ");
	scanf("%d%d", &num1, &num2);
	get_sum_diff(num1, num2, &sum, &diff);
	printf("원소들의 합=%d\n", sum);
	printf("원소들의 차=%d\n", diff);
	return 0;
}
