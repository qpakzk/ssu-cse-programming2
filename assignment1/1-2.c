#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void) {
	char str1[LEN];
	char str2[LEN];

	printf("첫 번째 문자열 : ");
	fgets(str1, LEN, stdin);
	str1[strlen(str1) - 1] = 0;

	printf("두 번째 문자열 : ");
	fgets(str2, LEN, stdin);
	str2[strlen(str2) - 1] = 0;
	
	strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}
