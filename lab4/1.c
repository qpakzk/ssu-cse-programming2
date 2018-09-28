#include <stdio.h>

int main(void) {
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(int i = 0; i < sizeof(days) / sizeof(int); i++)
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	return 0;
}
