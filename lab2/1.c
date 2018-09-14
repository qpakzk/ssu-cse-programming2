#include <stdio.h>
#include <string.h>
#define STR_MAX 20

int main(void) {
	char light[STR_MAX];

	printf("신호등 색상을 입력하세요\n");
	scanf("%s", light);

	if(!strcmp(light, "RED") || !strcmp(light, "red"))
		printf("멈추세요.\n");
	else if(!strcmp(light, "GREEN") || !strcmp(light, "green"))
		printf("건너가세요.\n");
	else if(!strcmp(light, "YELLOW") || !strcmp(light, "yellow"))
		printf("주의하세요.\n");
	else
		printf("신호등 색상을 입력하세요.\n");

	return 0;
}
