#include <stdio.h>

void find_Num(int a[], int n, int* largest, int* smallest) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] > *largest)
			*largest = a[i];
		if(a[i] < *smallest)
			*smallest = a[i];
	}
}

int main(void) {
	int a[] = { 1,11,3,18,8 };
	int largest = a[0];
	int smallest = a[0];

	find_Num(a, sizeof(a) / sizeof(int), &largest, &smallest);
	
	printf("함수 내에서 가장 큰 값 : %d\n", largest);
	printf("함수 내에서 가장 작은 값 : %d\n", smallest);

	return 0;
}
