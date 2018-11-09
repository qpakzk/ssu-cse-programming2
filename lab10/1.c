#include <stdio.h>

void gcd_lcm(int num1, int num2, int *gcd, int *lcm) {
	int temp1 = num1;
	int temp2 = num2;

	while(temp1 != temp2) {
		if(temp1 > temp2)
			temp1 -= temp2;
		else
			temp2 -= temp1;
	}
	*gcd = temp1;
	*lcm = (num1 * num2) / (*gcd);
}


int main(void) {
	int num1, num2;
	int gcd, lcm;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d%d", &num1, &num2);

	gcd_lcm(num1, num2, &gcd, &lcm);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);
	return 0;
}
