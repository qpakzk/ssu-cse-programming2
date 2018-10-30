#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 6

void input_nums(int *lotto_nums) {
	int count = 0;
	int input;
	bool is_same;	
	int i;

	while(count < SIZE) {
		printf("번호 입력 : ");
		scanf("%d", &input);
		is_same = false;
		for(i = 0; i <= count; i++) {
			if(lotto_nums[i] == input) {
				printf("같은 번호가 있습니다!\n");
				is_same = true;
				break;
			}
		}

		if(!is_same) {
			lotto_nums[count] = input;
			count++;
		}
	}
}

void print_nums(int *lotto_nums) {
	int i;
	
	printf("로또 번호 : ");
	for(i = 0; i < SIZE; i++)
		printf("\t%d", lotto_nums[i]);
	printf("\n");
}

int main(void) {
	int nums[SIZE];
	input_nums(nums);
	print_nums(nums);
	return 0;
}
