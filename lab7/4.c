#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size) {
	int i;
	for(i = 0; i < size; i++)
		scores[i] = (100.0 / 4.5) * grades[i];
}

int main(void) {
	int i;
	double grades[SIZE] = { 00.00, 00.50, 01.00, 01.50, 02.00, 02.50, 03.00, 03.50, 04.00, 04.50 };
	double scores[SIZE];
	
	convert(grades, scores, SIZE);
	for(i = 0; i < SIZE; i++)
		printf("%05.2lf ", grades[i]);
	printf("\n");

	for(i = 0; i < SIZE; i++) {
		if(scores[i] < 10.0)
			printf("%05.2lf ", scores[i]);
		else
			printf("%.2lf ", scores[i]);
	}
	printf("\n");
			
	return 0;
}
