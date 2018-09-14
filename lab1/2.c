#include <stdio.h>
#include <string.h>
#define INDEX 5

int main(void) {
	char star[INDEX][INDEX];
	int i, j;

	memset(star, 0x00, sizeof(star));
	
	star[0][0] = star[0][4] =  '*';
	star[1][1] = star[1][3] =  '*';
	star[2][2] = star[2][2] =  '*';
	star[3][3] = star[3][1] =  '*';
	star[4][4] = star[4][0] =  '*';

	for(i = 0; i < INDEX; i++) {
		for(j = 0; j < INDEX; j++) {
			if(!star[i][j])
				printf(" ");
			else
				printf("%c", star[i][j]);
		}
		printf("\n");
	}
	return 0;
}
