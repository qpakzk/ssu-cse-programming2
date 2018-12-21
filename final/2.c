#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 100

typedef struct _item {
	char name[NAME_LEN];
	int count;
	int price;
} ITEM;

int main(void) {
	ITEM **item;
	int cnt;
	int i;
	
	printf("상품의 개수 : ");	
	scanf("%d", &cnt);
	
	printf("상품의 이름, 수량, 가격을 입력한다.\n");
	item = (ITEM **)malloc(sizeof(ITEM *) * cnt);
	for(i = 0; i < cnt; i++) {
		item[i] = (ITEM *)malloc(sizeof(ITEM));
		scanf("%s%d%d", item[i]->name, &item[i]->count, &item[i]->price);
		rewind(stdin);	
	}
	
	printf("ITEM\tNAME\tPRICE\n");
	for(i = 0; i < cnt; i++)
		printf("%s\t%d\t%d\n", item[i]->name, item[i]->count, item[i]->price);
	
	for(i = 0; i < cnt; i++)
		free(item[i]);
	free(item);
	return 0;
}
