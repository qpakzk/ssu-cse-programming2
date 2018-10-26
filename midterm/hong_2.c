#include <stdio.h>

void rotate(int *p1, int *p2, int *p3) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = *p3;
	*p3 = tmp;
}

int main(void) {
	int n1 = 10, n2 = 20, n3 = 30;		
	int ch;
	printf("%d:%d:%d", n1, n2, n3);
	while((ch = getchar()) == '\n') {
		rotate(&n1, &n2, &n3);
		printf("%d:%d:%d", n1, n2, n3);
	}

	return 0;
}
