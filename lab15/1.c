#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define TITLE_SIZE 50

typedef struct book {
	char title[TITLE_SIZE];
	int release;
} BOOK;

typedef struct node {
	BOOK book;
	struct node *link;
} NODE;

int main(void) {
	BOOK book;
	NODE *list = NULL;
	NODE *tail = NULL;
	NODE *temp;

	while(1) {
		printf("책의 제목을 입력하시오 : (종료하려면 엔터) ");
		fgets(book.title, TITLE_SIZE, stdin);
        if(book.title[0] == '\n') {
            for(temp = list; temp != NULL; temp = temp->link) {
				printf("책의 제목 : %s\t", temp->book.title);	
				printf("출판연도 : %d\n", temp->book.release);	
			}
            break;
        }
        book.title[strlen(book.title) - 1] = 0;

        printf("출판연도를 입력하시오 : ");
		scanf("%d", &book.release);
		rewind(stdin);

        if(list == NULL) {
			list = (NODE *)malloc(sizeof(NODE));
			strcpy(list->book.title, book.title);
			list->book.release = book.release;
			list->link = NULL;
			tail = list;
		}
		else {
			NODE *new = (NODE *)malloc(sizeof(NODE));
			strcpy(new->book.title, book.title);
			new->book.release = book.release;
			new->link = NULL;
			tail->link = new;
			tail = new;
		}
	}

	while(list) {
		temp = list;
		list = list->link;
		free(temp);
	}
	return 0;
}
