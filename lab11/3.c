#include <stdio.h>
#include <string.h>
#define LEN 1000

int main(void) {
	char str[LEN];
	char ans[LEN];
	char *token[LEN];
	char *temp;
	int idx, i;

	printf("문자열을 입력하시오: ");
	fgets(str, LEN, stdin);
	str[strlen(str) - 1] = 0;
	
	idx = 0;
	temp = strtok(str, " ");
	while(temp != NULL) {
		token[idx++] = temp;
		temp = strtok(NULL, " ");
	}
	
	strcpy(ans, token[idx - 1]);
	strcat(ans, " ");
	for(i = idx - 2; i >= 0; i--) {
		strcat(ans, token[i]);
		strcat(ans, " ");
	}

	str[strlen(str) - 1] = 0;
	printf("%s\n", ans);
	return 0;
}
