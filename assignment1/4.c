#include <stdio.h>
#include <string.h>

#define LEN 50
#define NUM_ALPHA 26

int str_chr(char *s, int c) {
	int i;
	int len = strlen(s);
	int cnt;

	cnt = 0;
	for(i = 0; i < len; i++) {
		if(s[i] == c || s[i] == c -0x20)
			cnt++;
	}
	
	return cnt;
}
int main(void) {
	char input[LEN];
	int cnt[NUM_ALPHA];
	int i;

	printf("문자열을 입력하시오 : ");
	fgets(input, LEN, stdin);
	input[strlen(input) - 1] = 0;

	for(i = 'a'; i <= 'z'; i++) {
		cnt[i - 'a'] = str_chr(input, i);
	}

	printf("대소문자를 구분하지 않고 함께 카운팅했습니다.\n");
	for(i = 0; i < NUM_ALPHA; i++)
		printf("%c의 개수 : %d\n", i + 'a', cnt[i]);

	return 0;
}
