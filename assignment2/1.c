#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 100

int main(void) {
	FILE *fp;
	char *fname = "input1.txt";
	char buf[BUFSIZE];
	int num;

	if((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "%s open error\n", fname);
		exit(1);
	}	

	memset(buf, 0x00, BUFSIZE);
	num = 1;
	while(fgets(buf, BUFSIZE, fp) != NULL) {
		buf[strlen(buf) - 1] = 0;
		printf("%d: %s\n", num, buf);
		num++;
		memset(buf, 0x00, BUFSIZE);
	}

	return 0;
}
