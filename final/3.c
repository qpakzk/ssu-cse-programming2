#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main(void) {
	char *fname = "kong.txt";
	FILE *fp;
	char buf[SIZE];
	int cnt;
	int i;

	if((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "%s open error\n", fname);
		exit(1);
	}	

	fread(buf, sizeof(char), SIZE, fp);

	i = 0;
	cnt = 1;
	printf("%d: ", cnt++);
	while(buf[i] !=  '\0') {
		if(buf[i] == '\n' && buf[i + 1] != '\0') {
			printf("%c%d: ", buf[i], cnt++);
		}
		else {
			printf("%c", buf[i]);
		}
		i++;
	}

	fclose(fp);
	return 0;
}
