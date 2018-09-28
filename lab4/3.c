#include <stdio.h>
#define BUFSIZE 3

int main(void) {
	int mat[BUFSIZE][BUFSIZE] = {
		{40, 15, 60},
		{25, 10, 50},
		{30, 20, 15}
	};
	int i, j;
	int sum;
	for(i = 0; i < BUFSIZE; i++) {
		sum = 0;
		for(j = 0; j < BUFSIZE; j++)
			sum += mat[i][j];
		printf("%d행의 합계 : %d\n", i + 1, sum);
	}

	for(i = 0; i < BUFSIZE; i++) {
		sum = 0;
		for(j = 0; j < BUFSIZE; j++)
			sum += mat[j][i];
		printf("%d열의 합계 : %d\n", i + 1, sum);
	}
		
	return 0;
}
