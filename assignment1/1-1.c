#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void) {
	char str1[LEN];
	char str2[LEN];

	printf("첫 번째 문자열 : ");
	gets(str1);

	printf("두 번째 문자열 : ");
	gets(str2);

	strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}
