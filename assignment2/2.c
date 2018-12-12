#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define BUFSIZE 10
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define PUBLISHER_SIZE 50

typedef struct BOOK{
	char title[TITLE_SIZE];
	char author[NAME_SIZE];
	char publisher[PUBLISHER_SIZE];
} BOOK;

int main(void) {
	int number;
	bool end = false;
	BOOK books[BUFSIZE];
	int idx = 0;

	while(!end) {
		printf("============================\n");
		printf("1. 추가\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		printf("============================\n");
		
		printf("정수값을 입력하시오 : ");
		scanf("%d", &number);
		rewind(stdin);

		switch(number) {
			char buf[TITLE_SIZE];
			case 1:
				printf("도서의 이름 : ");
				fgets(books[idx].title, TITLE_SIZE, stdin);
				books[idx].title[strlen(books[idx].title) - 1] = 0;

				printf("저자 : ");
				fgets(books[idx].author, NAME_SIZE, stdin);
				books[idx].author[strlen(books[idx].author) - 1] = 0;

				printf("출판사 : ");
				fgets(books[idx].publisher, PUBLISHER_SIZE, stdin);
				books[idx].publisher[strlen(books[idx].publisher) - 1] = 0;

				idx++;
				break;
			case 2:
				for(int i = 0; i < idx; i++) {
					printf("제목 : %s\n", books[i].title);
					printf("저자 : %s\n", books[i].author);
					printf("출판사 : %s\n", books[i].publisher);
				}
				break;
			case 3:
				printf("제목 : ");
				fgets(buf, TITLE_SIZE, stdin);
				buf[strlen(buf) - 1] = 0;
				for(int i = 0; i < idx; i++) {
					if(!strcmp(buf, books[i].title)) {
						printf("저자는 %s\n", books[i].author);
						break;
					}
				}
				break;
			case 4:
				end = true;
				break;
		}
	}
	return 0;
}
