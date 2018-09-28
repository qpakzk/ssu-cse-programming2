#include <stdio.h>

#define BUFSIZE 10

int main(void) {
	int item[BUFSIZE] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
	int num;	
#ifdef DEBUG
	int i;
	for(i = 0; i < BUFSIZE; i++)
		printf("상품 %d번 위치 = %d\n", i + 1, item[i]);
#endif
	while(1) {
		printf("상품 번호를 입력하시오 : ");
		scanf("%d", &num);
		
		if(num > 10 || num < 1)
			printf("잘못 입력했습니다. 다시 입력하시오.\n");
		else
			break;	
	}	
	
	printf("상품 번호 %d의 위치는 %d입니다.\n", num, item[num - 1]);
	return 0;
}
