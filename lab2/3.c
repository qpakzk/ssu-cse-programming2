#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
#define TOTAL 6

int main(void) {
	int number;	
	int cnt = 0;
	int lotto[TOTAL];
	int i;

	srand(time(NULL));

	while(cnt < TOTAL) {
		number = rand() % MAX + 1;
		for(i = 0; i < cnt; i++)
			if(number == lotto[i])
				continue;
		lotto[cnt++] = number; 
	}

	for(i = 0; i < TOTAL; i++)
		printf("%d ", lotto[i]);
	printf("\n");
	return 0;
}
