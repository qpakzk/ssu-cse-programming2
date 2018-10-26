#include <stdio.h>
#define SIZE 6

int count_same(int lotto[], int my_lotto[]) {
	int cnt = 0;
	int i, j;
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++)
			if(lotto[i] == my_lotto[j])
				cnt++;
	}

	return cnt;
}

int main(void) {
	int lotto[SIZE] = {4, 10, 25, 30, 41, 45};
	int my_lotto[SIZE] = {1, 4, 7, 22, 41, 43};
	printf("일치하는 번호의 개수 : %d\n", count_same(lotto, my_lotto));
	return 0;
}
