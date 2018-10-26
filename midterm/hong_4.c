#include <stdio.h>
#define ROW 3
#define COL 4

void mat_mul(int src[][COL], int dest[][COL], int mul) {
	int i, j;
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++)
			dest[i][j] = mul * src[i][j];
	}
}

int main(void) {
	int src[ROW][COL] = {
		{2, 4, 6, 8},
		{1, 2, 3, 4},
		{5, 7, 9, 11}
	};
	int dest[ROW][COL];		
	int i, j;

	mat_mul(src, dest, 5);	
	
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++)
			printf("%2d ", dest[i][j]);
		printf("\n");
	}	
	return 0;
}
