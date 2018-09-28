#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFSIZE 10

int main(void) {
	int num[BUFSIZE];
	int i;
	int max_num, min_num;

	srand(time(0));	
	
	max_num = 0;
	min_num = 51;
	for(i = 0; i < BUFSIZE; i++) {
		num[i] = rand() % 50 + 1;
		if(max_num < num[i])
			max_num = num[i];
		if(min_num > num[i])
			min_num = num[i];
	}
	
#ifdef 	DEBUG
	for(i = 0; i < BUFSIZE; i++)
		printf("%d ", num[i]);
	printf("\n");
#endif

	printf("최댓값은 %d\n", max_num);	
	printf("최솟값은 %d\n", min_num);	

	return 0;
}
