#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 100
#define PHONE_LEN 100

typedef struct _address {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
} ADDR;

int main(void) {
	int cnt;
	ADDR **addr;
	int i;

	printf("주소의 개수: ");
	scanf("%d", &cnt);
	rewind(stdin);

	addr = (ADDR **)malloc(sizeof(ADDR *) * cnt);
	for(i = 0; i < cnt; i++) {
		addr[i] = (ADDR *)malloc(sizeof(ADDR));
		printf("이름을 입력하시오 : ");
		scanf("%s", addr[i]->name);
		printf("휴대폰 번호를 입력하시오 : ");
		scanf("%s", addr[i]->phone);
	}

	printf("=======================================\n");
	printf("이름\t휴대폰 번호\n");
	printf("=======================================\n");
	for(i = 0; i < cnt; i++)
		printf("%s\t%s\n", addr[i]->name, addr[i]->phone);
	printf("=======================================\n");

	for(i = 0; i < cnt; i++)
		free(addr[i]);	 
	free(addr);
	return 0;
}
