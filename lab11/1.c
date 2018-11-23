#include <stdio.h>
#include <string.h>
#define LEN 1000

void encrypt(char cipher[], int shift) {
	int i = 0;
	while (cipher[i] != '\0') {
		if(cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if(cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("암호화된 문자열: %s", cipher);
}

void decrypt(char cipher[], int shift) {
	int i = 0;
	while (cipher[i] != '\0') {
		if(cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] -= shift;
			if(cipher[i] < 'a')
				cipher[i] += 26;
		}
		i++;
	}
	printf("복호화된 문자열: %s", cipher);
}


int main (void) {
	char cipher[LEN];
	int num;
	int shift = 3;

	while(1) {
		printf("1-암호화\n");
		printf("2-복호화\n");
		printf("3-종료\n");
		printf("> ");
		scanf("%d", &num);
		
		if(num > 3 || num < 1)
			continue;
		if(num == 3)
			break;
		
		getchar();
		printf("문자열을 입력하시오: ");
		fgets(cipher, LEN, stdin);
		if(num == 1)
			encrypt(cipher, shift);
		else if(num == 2)
			decrypt(cipher, shift);
	}

	return 0;
}
