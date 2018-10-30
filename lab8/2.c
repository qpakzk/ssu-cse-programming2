#include <stdio.h>

#define SIZE 4

void print_graph(int *sp, int size) {
	int i, j;
	int star;
	for(i = 0; i < size; i++) {
		printf("(%3d) ", sp[i]);
		star = sp[i] / 10;
		for(j = 0; j < star; j++)
			printf("*");
		printf("\n");
	}
}

int main(void) {
	int score[SIZE] = {88, 92, 78, 100};
	print_graph(score, SIZE);

	return 0;
}
