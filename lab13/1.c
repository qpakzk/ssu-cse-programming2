#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LEN 100
#define SIZE 2

struct phonebook {
	char name[LEN];
	char homephone[LEN];
	char cellphone[LEN];
};
int main(void) {
	struct phonebook info[SIZE], search;
	int i;
	bool hasInfo;

	for(i = 0; i < SIZE; i++) {
		printf("이름을 입력하시오 : ");
		scanf("%s", info[i].name);

		printf("집전화번호를 입력하시오 : ");
		scanf("%s", info[i].homephone);

		printf("휴대폰번호를 입력하시오 : ");
		scanf("%s", info[i].cellphone);
	}

	printf("\n검색할 이름을 입력하시오 : ");
	scanf("%s", search.name);

	hasInfo = false;
	for(i = 0; i < SIZE; i++) {
		if(!strcmp(info[i].name, search.name)) {
			printf("집전화번호 : %s\n", info[i].homephone);
			printf("휴대폰번호 : %s\n", info[i].cellphone);
			hasInfo = true;
			break;
		}
	}

	if(!hasInfo) 
		printf("검색이 실패하였습니다.\n");
	return 0;
}
