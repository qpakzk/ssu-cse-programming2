#include <stdio.h>
#include <stdbool.h>
#define INDEX 6

bool is_included(int input[], int num, int turn);

int main(void) {
	int input[INDEX] = { 0 };
	int i;
	int turn = 0;
	int num;

	while(1) {
		printf("로또 번호 입력 : ");
		scanf("%d", &num);
		
		if(num < 1 || num > 45) {
			printf("1부터 45 사이의 수를 입력하시오.\n");
			continue;
		}
		
		if(is_included(input, num, turn)) {
			printf("같은 번호가 있습니다!\n");	
			continue;
		}
	
		input[turn] = num;

		turn++;
		if(turn == 6)
			break;
	}

	printf("입력된 로또번호 : ");
	for(i = 0; i < INDEX; i++)
		printf("\t%d", input[i]);
	printf("\n");
	return 0;
}

bool is_included(int input[], int num, int turn) {
	int i;
	for(i = 0; i < turn; i++)
		if(input[i] == num)
			return true;

	return false;
}
