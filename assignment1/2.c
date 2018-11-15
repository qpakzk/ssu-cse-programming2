#include <stdio.h>
#include <string.h>

#define LEN 30

void remove_blank(char *dest, char *src) {
	int i = 0, j = 0;
	char *token;
	char temp[LEN];

	memset(dest, 0x00, LEN);
	token = strtok(src, " ");
	if(token != NULL)
		strcpy(dest, token);

	while(1) {
		token = strtok(NULL, " ");
		if(token == NULL)
			break;
		strcat(dest, token);
	}
}

int main(void) {
	char input[LEN], result[LEN];	
	
	printf("공백 문자가 있는 문자열을 입력하시오 : ");
	fgets(input, LEN, stdin);
	input[strlen(input) - 1] = 0;

	remove_blank(result, input);
	
	printf("%s\n", result);
	return 0;
}
