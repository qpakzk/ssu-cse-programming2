#include <stdio.h>
#define SIZE 5

int main(void) {
	int scores[SIZE];
	int max, min;
	int max_idx, min_idx;
	int i, j;
	int sum;
		
	printf("5명의 실습실 환경 점수 : ");
	//5명의 실습실 환경 점수 입력을 받는다.
	for(i = 0; i < SIZE; i++)
		scanf("%d", &scores[i]);
	//최대, 최소 점수 및 인덱스를 찾는다.
	max = min = scores[0];		
	max_idx = min_idx = 0;
	for(i = 1; i < SIZE; i++) {
		if(scores[i] > max) {
			max = scores[i]; 
			max_idx = i;
		}
		if(scores[i] < min) {
			min = scores[i];
			min_idx = i;
		}
	}
	
	//유효 점수를 출력하고
	//유효 점수의 합을 구한다.	
	sum = 0;	
	printf("유효점수 : ");
	for(i = 0; i < SIZE; i++) {
		if(i == max_idx || i == min_idx)
			continue;
		printf("\t%d", scores[i]);
		sum += scores[i];
	}

	//평균을 출력한다.
	printf("\n평균 : %.1lf\n", (double) sum / 3.0);
	return 0;
}
