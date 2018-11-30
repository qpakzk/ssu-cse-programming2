#include <stdio.h>
#include <string.h>
#define MAX 10

void print_seats(int seats[], int n);

int main(void) {
	int seats[MAX] = { 0 };
	char y_or_n[MAX];
	int seat_num;

	while(1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf("%s", y_or_n);
		
		if(!strcmp(y_or_n, "n")) 
			break;
		else if(!strcmp(y_or_n, "y")) {
			printf("몇 번째 좌석을 예약하시겠습니까? ");
			scanf("%d", &seat_num);
				
			if(seat_num < 1 || seat_num > 10) {
				printf("좌석 번호가 존재하지 않습니다.\n");
				continue;
			}
			else if(seats[seat_num - 1] == 1) {
				printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");	
				print_seats(seats, MAX);
				continue;
			}
			else {
				seats[seat_num - 1] = 1;
				printf("예약되었습니다.\n");
				print_seats(seats, MAX);
			}
		}
		else 
			printf("잘못 입력하였습니다. 다시 입력하세요.\n");
	}
	
	return 0;
}

void print_seats(int seats[], int n) {
	int i;
	printf("-------------------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("-------------------------------\n");
	for (i = 0; i < n; i++)
		printf(" %d", seats[i]);
	printf("\n");
}
