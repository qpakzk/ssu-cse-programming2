#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 50
#define SIZE 3

typedef struct student {
	int number;
	char name[NAME_LEN];
	double gpa;
} STUDENT;

int main(void) {
	STUDENT table[SIZE] = {
		{1, "Kim", 3.99},
		{2, "Min", 2.68},
		{3, "Lee", 4.01}
	};
	STUDENT s;
    FILE *fp;
    int i;

    if((fp = fopen("student.dat", "wb")) == NULL) {
        fprintf(stderr, "open error\n");
        exit(1);
    }
    fwrite(table, sizeof(STUDENT), SIZE, fp);
	fclose(fp);

    if((fp = fopen("student.dat", "rb")) == NULL) {
		fprintf(stderr,"open error\n");
		exit(1);
	}

	for(i = 0; i < SIZE; i++) {	
		fread(&s, sizeof(STUDENT), 1, fp);
		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.gpa);
	}
	fclose(fp);

    return 0;
}