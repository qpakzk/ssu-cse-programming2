#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 1000

bool check(char s[], char a[], char ch) {
	int i;
	for(i = 0; s[i] != '\0'; i++) {
		if(s[i] == ch)
			a[i] = ch;
	}

	return (strcmp(s, a) == 0);
}


int main (void) {
	char solution[LEN] = "C PGM";
	char answer[LEN] = "_ ___";
	char ch;
	int cnt = 20;

	while(cnt--) {
		printf("문자열은 다음과 같다: %s\n", answer);
		printf("글자를 추측하시오: ");
		ch = getchar();
		getchar();
		if(check(solution, answer, ch)) {
			printf("문자열은 다음과 같다: %s\n", answer);
			break;
		}
		fflush(stdin);
	}
	return 0;
}
