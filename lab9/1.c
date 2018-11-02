#include <stdio.h>

#define SIZE 10

void oNum(int *ptr) {
	int i;

	printf("홀수 출력: ");
	for(i = 0; i < SIZE; i++) {
		if(ptr[i] % 2 == 1)
			printf("%d ", ptr[i]);
	}
	printf("\n");
}

void eNum(int *ptr) {
	int i;

	printf("짝수 출력: ");
	for(i = 0; i < SIZE; i++) {
		if(ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
	printf("\n");
}

int main(void) {
	int arr[SIZE];
	int i;

	printf("총 10개의 숫자 입력\n");
	for(i = 0; i < SIZE; i++) {
		printf("숫자를 입력하세요 : ");
		scanf("%d", arr + i);
	}
	
	oNum(arr);
	eNum(arr);

	return 0;
}
