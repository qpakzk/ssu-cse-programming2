#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(void) {
	char input[SIZE];
	char output[SIZE];

	FILE *ifp = NULL;
	FILE *ofp = NULL;

	int c;

	printf("입력 파일 이름을 입력하시오 : ");
	scanf("%s", input);

	printf("출력 파일 이름을 입력하시오 : ");
	scanf("%s", output);
	getchar();

	if((ifp = fopen(input, "r")) == NULL) {
		fprintf(stderr, "%s open error\n", input);
		exit(1);
	}
	
	if((ofp = fopen(output, "w")) == NULL) {
		fprintf(stderr, "%s open error\n", output);
		exit(1);
	}

	while(1) {
		c = fgetc(ifp);
		if(c == EOF)
			break;
		if(c >= 'a' && c <= 'z')
			fputc(c - 0x20, ofp);
		else
			fputc(c, ofp);
	}
	fclose(ifp);
	fclose(ofp);

	return 0;
}
